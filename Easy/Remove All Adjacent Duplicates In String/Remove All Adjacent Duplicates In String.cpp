class Solution {
public:
    string removeDuplicates(string s) {
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                if(st.top()==s[i])
                    st.pop();
                else
                    st.push(s[i]);
            }
        }
        string str;
        while(!st.empty()){
            char c = st.top();
            st.pop();
            str+=c;
        }
        reverse(str.begin(),str.end());
    return str;
    }
};
