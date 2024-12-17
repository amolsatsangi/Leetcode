class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxI = INT_MIN;
        int sum{0};
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxI = max(sum,maxI);
            if(sum<0)
                sum =0;
        }
        return maxI;
    }
};
