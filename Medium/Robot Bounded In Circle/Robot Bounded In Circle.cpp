class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x{0},y{0},d=0;
        for(int i=0;i<4;i++){
        for(auto c: instructions){
            if(c=='G' && d%360==0)
                y++;
            else if(c=='G' && (d%360==90 || d%360 == -270 ))
                x++;
            else if(c=='G' && abs(d%360) == 180)
                y--;
            else if(c=='G' && (d%360 == 270 || d%360 == -90))
                x--;
            else if(c=='L')
                d-=90;
            else if(c=='R')
                d+=90;
        }
        }
    if(x==0 && y ==0)
        return true;
    return false;
    }
};
