class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans{0};
        for(int i=0;i<nums.size();i++){
            int num = i,count{0};
            while(num){
                int temp = num%2;
                count+=temp;
                num/=2;
            }
            if(count == k)
                ans+=nums[i];
        }
        return ans;
    }
};
