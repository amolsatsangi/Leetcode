class Solution {
public:
    void generate(vector<string> & vec,string str,int n,int l,int r){
        if(r==l && r+l==n*2){
            vec.push_back(str);
            return;
        }
        if(l<n)
            generate(vec,str+"(",n,l+1,r);
        if(r<l)
            generate(vec,str+")",n,l,r+1);

    }
    vector<string> generateParenthesis(int n) {
        int open{0},close{0};
        string str{""};
        vector<string> vec;
        generate(vec,str,n,open,close);
        return vec;
    }
};
