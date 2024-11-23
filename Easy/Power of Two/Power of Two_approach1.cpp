class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
    return fmod(log2(n),1) ==0;
    }
};
