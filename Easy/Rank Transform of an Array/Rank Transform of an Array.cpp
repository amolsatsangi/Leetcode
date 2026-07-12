class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> t_arr{arr};
        vector<int> ranks;
        sort(t_arr.begin(),t_arr.end());
        t_arr.erase(unique(t_arr.begin(),t_arr.end()),t_arr.end());
        for(int i=0;i<arr.size();i++){
            //auto it = find(t_arr.begin(),t_arr.end(),arr[i]);
            //int index = distance(t_arr.begin(), it);
            int index = lower_bound(t_arr.begin(),t_arr.end(),arr[i])-t_arr.begin()+1;
            ranks.push_back(index);
        }
        return ranks;
    }
};
