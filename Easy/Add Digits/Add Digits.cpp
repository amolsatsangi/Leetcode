class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int temp = num%10;
            num/=10;
            num=num+temp;
        }
    return num;
    }
};
