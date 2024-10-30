class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum{0}, prodcut{1};
        while(n){
            sum = sum + n%10;
            prodcut = prodcut * (n%10);
            n = n/10;
        }
    return prodcut - sum;
    }
};
