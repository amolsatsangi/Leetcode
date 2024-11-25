class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int last{nums[0]};
        for(int i=1;i<nums.size();i++){
            if(last==nums[i])
                return true;
            last = nums[i];
        }
        return false;
    }
};
