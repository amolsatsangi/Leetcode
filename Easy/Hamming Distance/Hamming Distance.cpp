class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x^y, count{0};
        while(z){
            count += z%2;
            z/=2;
        }
    return count;
    }
};
