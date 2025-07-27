class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int hill{0},valley{0},last = nums[0];
        for(int i=1;i<nums.size()-1;i++){
            int temp = nums[i];
            while(i<nums.size()-1 && nums[i]==nums[i+1]){
                i++;
            }
            if(last>temp && i+1<nums.size() && temp<nums[i+1]){
                valley++;
            }
            else if(last<temp && i+1<nums.size() && temp>nums[i+1]){
                hill++;
            }
            last = nums[i];
        }
    return hill+valley;
    }
};
