class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int ans{0};
        for(auto c : s){
            if(c == '(' || c == '{')
                st.push(c);
            else if(st.empty() || (c == ')' && st.top() != '(') || (c == '}' && st.top() != '{'))
                ans++;
            else 
                st.pop();
        }
    return ans+st.size();
    }
};
