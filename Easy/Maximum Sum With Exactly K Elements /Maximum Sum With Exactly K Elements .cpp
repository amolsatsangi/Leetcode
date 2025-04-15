class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int score{0}, maxi{INT_MIN};
        for(int i=0;i<nums.size();i++)
            maxi = max(maxi, nums[i]);
        score = maxi;
        for(int i=1;i<k;i++){
            score +=(maxi+i);
        }
    return score;
    }
};
