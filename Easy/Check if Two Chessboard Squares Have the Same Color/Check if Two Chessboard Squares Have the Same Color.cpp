class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int n1 = (coordinate1[0]-'a'+1) + (coordinate1[1]-'0');
        int n2 = (coordinate2[0]-'a'+1) + (coordinate2[1]-'0');
        if((n1%2 && n2%2) || (n1%2 ==0 && n2%2==0))
            return true;
        return false;
    }
};
