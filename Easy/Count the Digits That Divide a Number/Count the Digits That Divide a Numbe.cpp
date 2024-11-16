class Solution {
public:
    int countDigits(int num) {
        int n {num}, count{0};
        while(n){
            int reminder = n%10;
            if(num%reminder == 0)
                count++;
            n/=10;
        }
        return count;
    }
};
