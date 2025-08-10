class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string str1 = to_string(n);
        sort(str1.begin(),str1.end());
        long int k{0};
        if(n==1)
            return true;
        for(int i=1;k<INT_MAX;i++){
            k = pow(2,i);
            string str2 = to_string(k);
            sort(str2.begin(),str2.end());
            if(str2==str1)
                return true;
        }
    return false;
    }
};
