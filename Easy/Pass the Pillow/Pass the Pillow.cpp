class Solution {
public:
    int passThePillow(int n, int time) {
        bool right{true};
        int ans{1};
        for(int i=1;i<=time;i++){
            if(right){
                ans++;
            }
            else{
                ans--;
            }
            if(ans==n){
                right=false;
            }
            if(ans==1)
                right = true;
        }
    return ans;
    }
};
