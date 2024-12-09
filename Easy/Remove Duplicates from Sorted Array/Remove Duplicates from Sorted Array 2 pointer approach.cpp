class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0,i=0,j=0;
        while(j<nums.size()){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
            j++;
            
        }
        return ++i;
    }
};
