class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++)
            umap[nums[i]]++;
        while(true){
            if(!umap.count(original))
                return original;
            original *= 2;
        }
    return -1;
    }
};
