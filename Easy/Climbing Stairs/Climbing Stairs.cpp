class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        long int f{1},s{2},stair{0};
        for(int i=3;i<=n;i++){
            stair = f+s;
            f=s;
            s=stair;
        }
        return stair;
    }
};
