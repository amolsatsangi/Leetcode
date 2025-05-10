class Solution {
public:
    int pivotInteger(int n) {
        int res = (n*(n+1))/2;
        double final = sqrt(res);
        if(fmod(final,1)==0)
            return int(final);
        return -1;
    }
};
