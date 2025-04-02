class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long int ans{INT_MIN}, maxi{0}, a,b,c;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    a = nums[i];b=nums[j];c=nums[k];
                    maxi = (a-b)*c;
                    ans = max(ans,maxi);
                }
            }
        }
    return ans<0?0:ans;
    }
};
