class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry{0},i=num1.size()-1,j=num2.size()-1;
        string new_str{};
        int k{0};
        string num_str{};
        while(i>=0 && j>=0){
            int temp = num1[i]-'0'+num2[j]-'0'+carry;
            carry = temp/10;
            new_str=to_string(temp%10)+new_str;
            i--;j--;
        }
        while(i>=0){
            int temp = num1[i]-'0'+carry;
            carry = temp/10;
            new_str=to_string(temp%10)+new_str;
            i--;
        }
        while(j>=0){
            int temp = num2[j]-'0'+carry;
            carry = temp/10;
            new_str=to_string(temp%10)+new_str;
            j--;
        }
        if(carry){
            new_str=to_string(carry)+new_str;
        }
    return new_str;
    }
};
