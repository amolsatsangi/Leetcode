class Solution {
public:
    int arrangeCoins(int n) {
        long long  int sum{0};
        for(int i=0;i<=n;i++){
            sum+=i;
            if(sum>n)
                return i-1;
            else if(sum==n)
                return i;
        }
    return -1;
    }
};
