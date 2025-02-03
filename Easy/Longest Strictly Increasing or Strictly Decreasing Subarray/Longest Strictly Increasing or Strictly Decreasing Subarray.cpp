class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxi{0}, mini{0};
        int c1{1},c2{1};
        if(nums.size()==1)
            return 1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                c1++;
                mini=max(mini,c2);
                maxi=max(maxi,c1);
                c2=1;
            }
            else if(nums[i]<nums[i+1]){
                c2++;
                maxi=max(maxi,c1);
                mini=max(mini,c2);
                c1=1;
            }
            else{
                mini=max(mini,c2);
                c2=1;
                maxi=max(maxi,c1);
                c1=1;
            }
        }
        return max(maxi,mini);
    }
};
