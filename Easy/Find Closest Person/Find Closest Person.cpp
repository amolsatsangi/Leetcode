class Solution {
public:
    int findClosest(int x, int y, int z) {
        int x1 = abs(z-x);
        int y1 = abs(z-y);
        if(x1==y1)
            return 0;
        return x1<y1?1:2;
    }
};
