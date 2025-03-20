class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int smini{INT_MAX}, mini{INT_MAX}, maxi{INT_MIN},smaxi{INT_MIN};
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mini){
                smini = mini;
                mini = nums[i];
            }
            else if(nums[i]<smini){
                smini = nums[i];
            }
            if(nums[i]>maxi){
                smaxi= maxi;
                maxi = nums[i];
            }
            else if(nums[i]>smaxi){
                smaxi = nums[i];
            }
        }
    return (maxi*smaxi)-(mini * smini);
    }
};
