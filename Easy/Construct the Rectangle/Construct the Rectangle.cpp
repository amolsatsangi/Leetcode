class Solution {
public:
    vector<int> constructRectangle(int area) {
        int w{1},l{area};
        for(int i=1;i*i<=area;i++){
                if(area%i==0){
                        w = i;
                        l = area/w;
                }
        }
    return {l,w};
    }
};
