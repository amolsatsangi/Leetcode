class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> umap;
        for(int i=0;i<arr.size();i++){
            umap[arr[i]]++;
        }
        int lucky{-1};
        for(auto i: umap){
            if(i.first==i.second)
                lucky = max(lucky,i.first);
        }
    return lucky;
    }
};
