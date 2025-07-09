class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum{nums[0]};
        int count{0};
        for(int i=1;i<nums.size();i++)
            sum=sum^nums[i];
        sum=sum^k;
        while(sum){
            if(sum%2)
                count++;
            sum/=2;
        }
    return count;
    }
};
