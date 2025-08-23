class Solution {
public:
    void cal_power(double & ans,double & x,long & n){
        if(!n)
            return;
        if(n%2){
            ans = ans*x;
            n--;
        }
        else{
            x=x*x;
            n/=2;
        }
        cal_power(ans,x,n);
    }
    double myPow(double x, int n) {
        long  p=n;
        if(x==0)
            return 0;
        double ans{1};
        if(n<0){
            x=1/x;
            p=-p;
        }
        cal_power(ans,x,p);
        return ans;
    }
};
