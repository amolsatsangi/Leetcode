class Solution {
public:
    double myPow(double x, int n) {
        double ans{1};
        long int num = n;
        if(n<0){
            x= 1/x;
            num= -1*num;
        }
        while(num){
            if(num%2!=0){
                ans=x*ans;
                num--;
            }
            else{
                x=x*x;
                num/=2;
            }
        }
        return ans;
    }
};
