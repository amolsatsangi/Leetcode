class Solution {
public:
    int houseRobber(vector<int>& money,int start,int n){
        if(start == n)
            return money[start];
        if(n<start)
            return 0;
        int used_n = houseRobber(money,start,n-2)+money[n];
        int not_used_n = houseRobber(money,start,n-1);
        return max(used_n,not_used_n);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        return max(houseRobber(nums,0,nums.size()-2),houseRobber(nums,1,nums.size()-1));
    }
};
