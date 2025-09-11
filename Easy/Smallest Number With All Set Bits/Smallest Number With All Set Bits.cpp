class Solution {
public:
    int smallestNumber(int n) {
        double num{0},power{0};
        while(n){
            n/=2;
            num+=(pow(2,power));
            power++;
        }
    return num;
    }
};
