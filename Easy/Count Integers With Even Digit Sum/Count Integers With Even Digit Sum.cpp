class Solution {
public:
    int countEven(int num) {
        int count{0};
       for(int i=2;i<=num;i++){
            int temp = i, sum{0};
            while(temp){
                sum += (temp%10);
                temp/=10;
            }
            if(!(sum%2))
                count++;
       }
    return count;
    }
};
