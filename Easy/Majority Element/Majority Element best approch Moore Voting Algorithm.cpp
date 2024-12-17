class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count{0}, element{nums[0]};
        for(int i=0;i<nums.size();i++){
            if(nums[i]==element){
                count++;
            }
            else{
                count --;
            }
            if(count==0){
                element=nums[i];
                count=1;
            }
        }
        return element;
    }
};
