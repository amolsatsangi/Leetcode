class Solution {
public:
    bool flag = false;
    bool isPowerOfFour(int n) {
        if(n==1){
            flag = true;
        }
        if(n%4!=0 && n!=1)
            return false;
        if(n>1){
        isPowerOfFour(n/4);
        }
        return flag;
    }
};
