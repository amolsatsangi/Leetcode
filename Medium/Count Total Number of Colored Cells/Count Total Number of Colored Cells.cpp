class Solution {
public:
    long long coloredCells(int n) {
        return long(n)*long(n)+long(n-1)*long(n-1);
    }
};
