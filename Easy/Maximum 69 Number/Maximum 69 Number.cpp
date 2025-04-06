class Solution {
public:
    int maximum69Number (int num) {
        int n=num;
        int last{0},i{0};
        while(num){
            i++;
            if(num%10 == 6)
                last = i;
            num/=10;
        }
        if(last==0)
            return n;
    return (n%int(pow(10,(last-1)))+9*pow(10,(last-1))+(n/int(pow(10,last)))*pow(10,last));
    }
};
