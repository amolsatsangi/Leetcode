class Solution {
public:
    string generateTheString(int n) {
        string str(n-1,'a');
        if(n%2==0)
            str+='s';
        else
            str+='a';
    return str;
    }
};
