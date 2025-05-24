class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int odd_sum{0}, even_sum{0};
        for(int i=0;i<nums.size();i++){
            if(nums[i]>9)
                odd_sum+=nums[i];
            else
                even_sum+=nums[i];
        }
    return odd_sum!=even_sum;
    }
};
