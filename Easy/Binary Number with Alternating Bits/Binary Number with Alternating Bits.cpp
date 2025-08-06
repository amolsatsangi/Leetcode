class Solution {
public:
    bool hasAlternatingBits(int n) {
        int last=n%2;
        n/=2;
        while(n){
            int temp = n%2;
            n/=2;
            if(temp == last)
                return false;
            last = temp;
        }
    return true;
    }
};
