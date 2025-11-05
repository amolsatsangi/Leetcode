class Solution {
public:
    int binaryGap(int n) {
        int distance{0};
        int last{-1};
        int count{0};
        while(n){
            int t = n%2;
            if(t){
                if(last!=-1){
                    distance = max(distance,count-last);
                    last = count;
                }
                else{
                    last = count;
                }
            }
            n = n/2;
            count++;
        }
        return distance;
    }
};
