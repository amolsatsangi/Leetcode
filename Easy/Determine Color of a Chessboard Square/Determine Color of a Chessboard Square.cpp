class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int f1{1};
        char c{'a'};
        while(c!=coordinates[0]){
            f1++;
            c++;
        }
        int f2 = coordinates[1]-'0';
        return (f1+f2)%2 == 0 ? false : true;
    }
};
