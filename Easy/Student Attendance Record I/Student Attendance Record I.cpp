class Solution {
public:
    bool checkRecord(string s) {
        int L{0};
        int A{0};
        for(int i=0;i<s.size();i++){
            if(s[i]=='A')
                A++;
            else if(s[i]=='L'){
                int j =i;
                while(s[j]=='L'){
                    j++;
                    L++;
                }
                if(L>=3)
                    return false;
                L = 0;
            }
            if(A>=2)
                return false;
        }
    return true;
    }
};
