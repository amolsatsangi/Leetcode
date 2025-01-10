class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()==2)
            return true;
        int x1{coordinates[0][0]},x2{coordinates[1][0]};
        int y1{coordinates[0][1]},y2{coordinates[1][1]};
        if(x2-x1!=0){
            double m = double(y2-y1)/(x2-x1);
            cout<<m<<endl;
        for(int i=2;i<coordinates.size();i++){
            double y = y1+m*(coordinates[i][0]-x1);
            if(y!=coordinates[i][1]){
                cout<<y<<endl;
                return false;
            }
        }
        }
        else{
            for(int i=2;i<coordinates.size();i++){
            if(coordinates[i][0]!=x1)
                return false;
        }
        }
        return true;
    }
};
