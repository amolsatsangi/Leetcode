class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans{0};
        for(int i=0;i<nums.size();i++){
            int temp = nums[i];
            int count{0};
            while(temp){
                temp/=10;
                count++;
            }
            if(count%2==0)
                ans++;
        }
    return ans;
    }
};
