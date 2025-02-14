class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count{0};
        for(auto i:nums){
            if(!i)
                return 0;
            else if(i<0)
                count++;
        }
    return count%2==0?1:-1;
    }
};
