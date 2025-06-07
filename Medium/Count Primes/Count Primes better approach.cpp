class Solution {
public:
    int countPrimes(int n) {
        vector<int> vec(n,1);
        for(long int i=2;i<n;i++){
            if(vec[i]==1){
                for(long int j= i*i;j<n;j=j+i)
                    vec[j]=0;
            }
        }
        int ans{0};
        for(int i=2;i<n;i++){
            if(vec[i]==1)
                ans++;
        }
    return ans;
    }
};
