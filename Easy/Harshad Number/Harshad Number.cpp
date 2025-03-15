class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum{0};
        int n = x;
        while(n){
            int rem = n%10;
            n/=10;
            sum+=rem;
        }
        return x%sum==0?sum:-1;
    }
};
