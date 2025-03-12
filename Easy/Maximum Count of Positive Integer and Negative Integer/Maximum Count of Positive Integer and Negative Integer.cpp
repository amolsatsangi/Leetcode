class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg{0}, pos{0},zero{0};
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)
                neg++;
            else if(nums[i]==0)
                zero++;
            else
                break;
        }
        pos  = nums.size()-neg-zero;
    return max(neg,pos);
    }
};
