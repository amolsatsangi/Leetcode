class Solution {
public:
    int mySqrt(int x) {
        long int i{0};
        long int y =x;
        while(i*i<y){
            i++;
            if(i*i>x){
                i--;
                break;
            }
        }
        
    return int(i);
    }
};
