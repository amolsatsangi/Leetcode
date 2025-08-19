class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans{0},count{0};
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
            else{
                ans += ((count+1)*count)/2;
                count=0;
            }
        }
    ans += ((count+1)*count)/2;
    return ans;
    }
};
