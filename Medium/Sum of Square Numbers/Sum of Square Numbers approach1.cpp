class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0)
            return true;
        long int start = 0, end = sqrt(c);
        while(start<=end){
            if(start*start+end*end == c)
                return true;
            else if(start*start+end*end>c)
                end--;
            else if(start*start+end*end<c)
                start++;
        }
    return false;
    }
};
