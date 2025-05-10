class Solution {
public:
    int pivotInteger(int n) {
        vector<int> v1(n+1);
        vector<int> v2(n+1);
        int sum1{0}, sum2{0};
        for(int i=1;i<=n;i++){
            sum1+=i;
            sum2+=n-i+1;
            v1[i]=sum1;
            v2[n-i+1]=sum2;
        }
        for(int i=1;i<=n;i++){
            if(v1[i]==v2[i])
                return i;
        }
    return -1;
    }
};
