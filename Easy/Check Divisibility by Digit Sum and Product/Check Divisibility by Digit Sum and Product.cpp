class Solution {
public:
    bool checkDivisibility(int n) {
        long int sum{0},product{1};
        int num{n};
        while(num){
            product *= (num%10);
            sum += (num%10);
            num /= 10;
        }
        //cout<<sum<<endl;
        return n%(sum+product) == 0?true:false;
    }
};
