class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count{0};
        unordered_map<int,int> umap;
        int sum{0};
        umap[sum]++;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            int diff = sum -k;
            count += umap[diff];
            umap[sum]++;
        }
    return count;
    }
};
