class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int start{0}, end{2},count{0};
        while(end<nums.size()){
            if(nums[start]+nums[end]==nums[(start+end)/2]/2.0)
                count++;
            start++;
            end++;
        }
        return count;
    }
};
