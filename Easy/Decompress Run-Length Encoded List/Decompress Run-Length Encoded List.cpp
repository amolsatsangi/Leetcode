class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int temp = nums[i];
            while(temp){
                ans.push_back(nums[i+1]);
                temp--;
            }
            i++;
        }
        return ans;
    }
};
