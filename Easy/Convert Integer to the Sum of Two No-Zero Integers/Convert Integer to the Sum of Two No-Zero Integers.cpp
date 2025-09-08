class Solution {
public:
    bool checkZero(int n ){
        while(n){
            if(n%10==0)
                return false;
            n/=10;
        }
    return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++){
            int n1 = i;
            int n2 = n-i;
            if(checkZero(n1) && checkZero(n2)){
                return {n1,n2};
            }
        }
    return {0,0};
    }
};
