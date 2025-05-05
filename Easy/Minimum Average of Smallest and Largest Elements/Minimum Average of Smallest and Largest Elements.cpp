class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        double mini{51}, average;
        int n =nums.size();
        for(int i=0;i<nums.size()/2;i++){
            average = (nums[i]+nums[n-1-i])/2.0;
            mini = min(mini, average);
        }
    return mini;
    }
};
