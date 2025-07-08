class Solution {
public:
static bool compare(pair<int,int> a, pair<int,int> b)
{
    if(a.first == b.first)
        return a.second<b.second;
    return a.first<b.first;
}
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> soldiers;
        for(int i=0;i<mat.size();i++){
            int sum{0};
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j])
                    sum++;
                else
                    break;
            }
            soldiers.push_back({sum,i});
        }
    sort(soldiers.begin(), soldiers.end(), compare);
    vector<int> ans;
    for(int i=0;i<k;i++){
        ans.push_back(soldiers[i].second);
    }
    return ans;
    }
};
