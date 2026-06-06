class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int totalSum{0};
        for(auto i:nums)
            totalSum+=i;
        int leftsum{0};
        for(int i=0;i<nums.size();i++){
            totalSum -= nums[i];
            ans[i]=abs(totalSum-leftsum);
            leftsum+=nums[i];
        }
        return ans;
    }
};
