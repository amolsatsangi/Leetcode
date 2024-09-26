class Solution {
public:
    string find_common_prefix_between_two_strings(string str1, string str2){
        string prefix ="";
        int i{0}, j{0};
        while(i<str1.size() && j< str2.size() && str1[i]==str2[j]){
            prefix+=str1[i];
            i++;j++;
        }
        return prefix;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string pre =strs[0];
       for(int i=1;i<strs.size();i++)
       {
            pre = find_common_prefix_between_two_strings(pre, strs[i]);
            if(pre=="")
                return "";
       }
    return pre;
    }
};
