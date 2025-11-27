class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size()-1;i++){
            int sum = nums[i]+nums[i+1];
            umap[sum]++;
            if(umap[sum]==2)
                return true;
        }
        return false;
    }
};
