class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long int total_sum = (nums.size()* (nums.size()+1))/2;
        cout<<total_sum<<endl;
        long int sum {0};
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return total_sum-sum;
    }
};
