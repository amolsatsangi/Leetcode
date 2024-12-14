class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int i{0}, j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
            if(nums[i]+nums[j]<target)
                i++;
            else
                j--;
        }
        return ans;
    }    
};
