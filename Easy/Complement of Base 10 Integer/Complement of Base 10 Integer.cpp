class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
            return 1;
        int m{0};
        int i{0};
        while(n){
            int temp = n%2;
            temp = !temp;
            m = pow(2,i)*temp+m;
            n/=2;
            i++;
        }
        return m;
    }
};
