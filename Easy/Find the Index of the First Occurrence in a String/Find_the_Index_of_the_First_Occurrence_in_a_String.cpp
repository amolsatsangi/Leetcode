class Solution {
public:
    int strStr(string haystack, string needle) {
        int res=0;
        for(int i=0;i<haystack.size();i++){
            int j=0;
            while(j<needle.size() && haystack[i]==needle[j]){
                j++;
                i++;
            }
            if(j!=needle.size()){
                i-=j;
            }
            else
                return i-=j;
        }
    return -1;
    }
};
