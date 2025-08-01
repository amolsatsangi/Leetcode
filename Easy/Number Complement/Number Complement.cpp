class Solution {
public:
    int findComplement(int num) {
        long n = num, count{0};
        while(n){
            n/=2;
            count++;
        }
    return num ^ int((pow(2,count))-1);
    }
};
