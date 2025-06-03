class Solution {
public:
    string convertToBase7(int num) {
        string n7{""};
        if(num>0){
            while(num){
                int temp = num%7;
                n7=to_string(temp)+n7;
                num/=7;
            }
        return n7;
        }
        else if(num==0)
            return "0";
        else{
            num=-num;
            while(num){
                int temp = num%7;
                n7=to_string(temp)+n7;
                num/=7;
            }
        }
    return ("-"+n7);
    }
};
