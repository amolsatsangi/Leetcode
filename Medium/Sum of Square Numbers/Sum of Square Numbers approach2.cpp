class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0)
            return true;
        for (long int i =0;i*i<c;i++){
            double k = sqrt(c- i*i);
            if(!fmod(k,1))
                return true;
        }
    return false;
    }
};
