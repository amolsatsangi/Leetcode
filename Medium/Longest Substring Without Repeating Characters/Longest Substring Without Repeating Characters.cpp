class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
            return 0;
        int i{0},j{1}, maxi{1},n{0};
        string str{s[0]};
        while(j<s.size()){
            if(str.find(s[j])==string::npos){
                str+=s[j];
                j++;
            }
            else{
                maxi = std::max(maxi,j-i);
                i++;
                str = s[i];
                j=i+1;
            }
        }
        maxi = std::max(maxi,j-i);
    return maxi;
    }
};
