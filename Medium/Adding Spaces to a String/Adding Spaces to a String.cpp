class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string str{};
        spaces.push_back(s.size());
        str+=s.substr(0,spaces[0]);
        str+=' ';
        for(int i=0;i<spaces.size()-1;i++){
            str += s.substr(spaces[i],spaces[i+1]-spaces[i]);
            if(i<spaces.size()-2)
                str += ' ';
        }
        return str;
    }
};
