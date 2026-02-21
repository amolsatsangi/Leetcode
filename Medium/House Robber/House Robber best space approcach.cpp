class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        int prev1=nums[0];
        int prev2=INT_MIN;
        for(int i =1;i<nums.size();i++){
            int pick = nums[i];
            if(i-2>=0){
                pick+=prev2;
            }
            int non_pick = prev1;
            prev2 = prev1;
            prev1 = max(pick,non_pick);
        }
        return prev1;
    }
};
