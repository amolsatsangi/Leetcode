class Solution {
public:
    int hammingWeight(int n) {
        int div{0},ans{0};
        while(n){
            div = n%2;
            n/=2;
            if(div)
                ans++;
        }
        return ans;
    }
};
