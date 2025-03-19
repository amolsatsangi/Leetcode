class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count{0};
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                if(i+2>=nums.size())
                    break;
                else{
                nums[i]=1;
                nums[i+1]= nums[i+1]==0?1:0;
                nums[i+2]=nums[i+2]==0?1:0;
                count++;
            }
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                return -1;
        }
    return count;
    }
};
