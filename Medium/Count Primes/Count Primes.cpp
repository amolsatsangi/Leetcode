class Solution {
public:
    int countPrimes(int n) {
        vector<int> prime(n,1);
        for(int i=2;i<n;i++){
            if(prime[i]==1){
                for(int j=i*2;j<n;j+=i){
                    prime[j]=0;
                }
            }
        }
        int count{0};
        for(int i=2;i<n;i++){
            if(prime[i]==1)
                count++;
        }
    return count;
    }
};
