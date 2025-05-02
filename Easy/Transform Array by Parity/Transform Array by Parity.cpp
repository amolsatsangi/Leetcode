class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int odd{0};
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0)
                odd++;
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(odd>0){
                nums[i]=1;
                odd--;
            }
            else
                nums[i]=0;
        }
    return nums;
    }
};
