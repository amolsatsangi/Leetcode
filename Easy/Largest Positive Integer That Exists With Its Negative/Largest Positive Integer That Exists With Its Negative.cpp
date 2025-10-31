class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int maxi{INT_MIN};
        unordered_map<int,int> umap;
         for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(umap.count(nums[i]*-1)){
                maxi = max(nums[i],maxi);
            }
        }
    return maxi==INT_MIN?-1:maxi;
    }
};
