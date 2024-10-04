class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i{0}, j{1};
        while(j<nums.size() && i<nums.size()){
            if(nums[i] ==0){
            while(j<nums.size() && nums[j]==0)
                j++;
            if(j==nums.size())
                break;
            swap(nums[i], nums[j]);
            }
            i++;
            j++;
        }
        }
};
