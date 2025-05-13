class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#' && !st.empty())  
                st.pop();
            else if(s[i]!='#')
                st.push(s[i]);
        }
        s="";
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#' && !st.empty())  
                st.pop();
            else if(t[i]!='#')
                st.push(t[i]);
        }
        t="";
        while(!st.empty()){
            t+=st.top();
            st.pop();
        }
        if(s.size()!=t.size())
            return false;
        cout<<s<<" "<<t<<endl;
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i])  
                return false;
        }
    return true;
    }
};
