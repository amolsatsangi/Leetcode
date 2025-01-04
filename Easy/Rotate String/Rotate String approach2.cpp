class Solution {
public:
    bool rotateString(string s, string goal) {
       if(s.size()!=goal.size())
        return false;
        string rotated{};
        for(int i=0;i<s.size();i++){
            rotated=s.substr(i)+s.substr(0,i);
            if(rotated==goal)
                return true;
        }
    return false;
    }
};
