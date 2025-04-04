class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int i{0},j=nums.size()-1;
        int n = nums.size();
        int count{0};
        sort(nums.begin(),nums.end());
        while(i<n && j>=0 && i<j){
            if(nums[i]+nums[j]==k){
                count++;
                i++;
                j--;
            }
            else if(nums[i]+nums[j]<k)
                i++;
            else
                j--;
        }
        return count;
    }
};
