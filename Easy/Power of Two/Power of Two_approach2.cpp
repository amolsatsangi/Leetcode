class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        for(long int i =1;i<=n;i=2*i){
            if(i==n)
                return true;
        }
    return false;
    }
};
