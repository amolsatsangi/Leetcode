class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string str = "";
        for(int i=0; i<nums.size(); i++) {
            // from string i flip the ith bit
            // from string 1 flip 1th bit, from string 2 flip 2nd bit, from string 3 flip 3rd bit ,...
            str += (nums[i][i]=='0'?'1':'0');
        }
            
        return str;
    }
};
