class Solution {
public:
    int alternateDigitSum(int n) {
        string my_string = to_string(n);
        int sum = 0;
        for(int i = 0; i < (int)my_string.size();i++){
            int d = my_string[i] - '0';
            if(i % 2 == 0){
                sum+=d;
            }
            else{
                sum-=d;
            }
        }
        return sum;
    }
};
