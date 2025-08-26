class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int area;
        long maxi{LONG_MIN};
        for(int i=0;i<dimensions.size();i++){
            long d = (pow(dimensions[i][0],2)+pow(dimensions[i][1],2));
            if(d>maxi){
                maxi = d;
                area = dimensions[i][0]*dimensions[i][1];
            }
            else if(d==maxi){
                if(area<(dimensions[i][0]*dimensions[i][1]))
                    area = dimensions[i][0]*dimensions[i][1];
            }
        }
    return area;
    }
};
