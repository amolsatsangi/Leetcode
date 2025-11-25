class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n= nums.size();
        while(n!=1){
            bool flag {true};
            int j=0;
            for(int i=0;i<n;i=i+2){
                if(flag){
                    nums[j]= min(nums[i],nums[i+1]);
                    flag = false;
                }
                else{
                    nums[j]= max(nums[i],nums[i+1]);
                    flag = true;
                }
                j++;

            }
            n/=2;
        }
    return nums[0];
    }
};
