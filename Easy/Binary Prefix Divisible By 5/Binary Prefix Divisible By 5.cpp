class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> vec;
        int val{0};
        for(int i=0;i<nums.size();i++){
            val = ((val<<1)+nums[i])%5;
            if(val==0)
                vec.push_back(1);
            else
                vec.push_back(0);
        }
        return vec;
    }
};
