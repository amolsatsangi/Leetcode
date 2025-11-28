class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int ans{1};
        while(true){
            int temp = ans;
            bool flag{true};
            for(int i=0;i<nums.size();i++){
                temp +=nums[i];
                if(temp<=0){
                    ans++;
                    flag = false;
                    break;
                }
            }
            if(flag)
                return ans;
        }
    return 0;
    }
};
