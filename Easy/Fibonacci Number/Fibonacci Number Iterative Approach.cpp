class Solution {
public:
    int fib(int n) {
        int fib_num{}, f0{0},f1{1};
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        for(int i=2;i<=n;i++){
            fib_num=f0+f1;
            f0=f1;
            f1=fib_num;
        }
        return fib_num;
    }
};
