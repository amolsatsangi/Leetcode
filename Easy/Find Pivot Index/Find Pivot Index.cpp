class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]=nums[i]+nums[i-1];
            cout<<nums[i]<<endl;
        }
        int lsum {0},rsum=nums[nums.size()-1]-nums[0];
        if (lsum==rsum)
            return 0;
        for(int i=0;i<nums.size()-1;i++){
            if(lsum==rsum)
                return i;
            else{
                lsum = nums[i];
                rsum = nums[nums.size()-1]-nums[i+1];
            }
        }
        if(lsum==rsum)
                return nums.size()-1;
        return -1;
    }
};
