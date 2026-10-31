class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans{INT_MAX};
        int tail{0},head{-1};
        int n = nums.size();
        int sum{0};
        while(tail<n){
            while(head+1<n && sum<target){
                head++;
                sum += nums[head];
            }
            if(sum>=target)
                ans = min(ans,head-tail+1);
            cout<<tail<<" "<<head<<endl;
            if(tail<=head){
                sum -= nums[tail];
                tail++;
            }
            else{
                tail++;
                head = tail-1;
            }
        }
        return ans==INT_MAX?0:ans;
    }
};
