class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sum{0};
        for(int i=0;i<nums.size();i++){
            int temp = nums[i];
            int sum{0};
            while(temp){
                int t = temp%10;
                temp/=10;
                sum+=t;
            }
            if(sum == i)
                return i;
        }
    return -1;
    }
};
