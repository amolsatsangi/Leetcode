class Solution {
public:
    int numberOfChild(int n, int k) {
        bool right{true};
        int ans{-1};
        for(int i=0;i<=k;i++){
            if(right){
                ans++;
            }
            else{
                ans--;
            }
            if(ans==n-1){
                right=false;
            }
            if(ans==0)
                right = true;
        }
    return ans;
    }
};
