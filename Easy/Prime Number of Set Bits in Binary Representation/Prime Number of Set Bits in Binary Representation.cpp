class Solution {
public:
    bool countBits(int n){
        int count{0};
        while(n){
            int t = n%2;
            if(t)
                count++;
            n/=2;
        }
        if(count == 2 || count == 3 || count == 5 || count == 7 || count == 11 || count == 13 || count == 17 || count == 19)
            return true;
        return false;
    }
    int countPrimeSetBits(int left, int right) {
        int count{0};
        for(int i=left;i<=right;i++){
            bool flag = countBits(i);
            if(flag)   
                count++;
        }
    return count;
    }
};
