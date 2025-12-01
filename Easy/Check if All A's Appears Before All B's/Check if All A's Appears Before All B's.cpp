class Solution {
public:
    bool checkString(string s) {
        bool flag {false};
        for(auto c:s){
            if(c=='b')
                flag = true;
            else if(c =='a' && flag)
                return false;
        }
        return true;
    }
};
