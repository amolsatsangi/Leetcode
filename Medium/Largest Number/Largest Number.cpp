bool cmp(string a,string b){
        if(a+b>b+a)
            return true;
        return false;
    }
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> snum;
        for(int i=0;i<nums.size();i++){
            snum.push_back(to_string(nums[i]));
        }
        sort(snum.begin(),snum.end(), &cmp);
        string ans;
        for(auto s:snum){
            ans+=s;
        }
        if(ans[0]=='0')
            return "0";
        return ans;
    }
};
