class Solution {
public:
    int sumBase(int n, int k) {
        int s{0};
        while(n){
            int temp = n%k;
            s = s+temp;
            n/=k;
        }
    return s;
    }
};
