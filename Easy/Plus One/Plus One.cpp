class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry{1}, rem{0}, div{0}, i = digits.size()-1;
        do{
            int temp = digits[i];
            digits[i]= (digits[i]+carry)%10;
            carry = (temp+carry)/10;
            i--;
        }while(carry&&i>=0);
        if(carry)
            digits.insert(digits.begin(),1);
    return digits;
    }
};
