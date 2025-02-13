class Solution {
public:
    int tribonacci(int n) {
        int ans{0};
        int a{0},b{1},c{1};
        if(n==0)
            return 0;
        if(n==1 || n==2)
            return 1;
        while(n>2){
            ans=a+b+c;
            a=b;
            b=c;
            c=ans;
            n--;
        }
        return ans;
    }
};
