class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum{0};
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int ls{0};
        if(sum - nums[0] ==0 )
            return 0;
        for(int i=1;i<nums.size();i++){
            ls+=nums[i-1];
            int temp = sum -ls -nums[i];
            if(ls ==temp)
                return i;
        }
        return -1;
    }
};
