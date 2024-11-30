class Solution {
public:
    bool isPerfectSquare(int num) {
        double num_root = sqrt(num);
        return (fmod(num_root,1)==0);
    }
};
