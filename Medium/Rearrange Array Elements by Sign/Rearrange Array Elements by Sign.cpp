class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int j{0},k{1};
        vector<int> ans(nums.size(),0);
        for(int i=0;i<nums.size();i++){
           if(nums[i]>=0){
            ans[j]=nums[i];
            j+=2;
           }
           else{
            ans[k]=nums[i];
            k+=2;
           }
        }
    return ans;
    }
};
