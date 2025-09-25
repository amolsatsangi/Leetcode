class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum{0};
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        int total{0},count{0};
        for(int i=0;i<nums.size()-1;i++){
            total+=nums[i];
            if((total-(sum-total))%2==0)
                count++;
        }
        return count;
    }
};
