class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack <char> st;
        bool flag {false};
        string new_word{""};
        int i{0};
        for(i = 0; i<word.size();i++){
            if(word[i]==ch)
            {
                st.push(word[i]);
                while(!st.empty()){
                    new_word+=st.top();
                    st.pop();
                }
                flag = true;
            }
            if(flag)
                break;
            st.push(word[i]);
        }
        if(!flag)
            return word;
        new_word += word.substr(i+1,word.size()-i-1);
        return new_word;
    }
};
