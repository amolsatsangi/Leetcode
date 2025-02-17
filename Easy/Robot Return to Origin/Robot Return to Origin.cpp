class Solution {
public:
    bool judgeCircle(string moves) {
       int r{0},l{0},u{0},d{0};
       for(auto c:moves){
        if(c=='U')
            u++;
        else if(c=='D')
            d++;
        else if(c=='L')
            l++;
        else 
            r++;
       }
       if(r==l && u==d)
        return true;
    return false;
    }
};
