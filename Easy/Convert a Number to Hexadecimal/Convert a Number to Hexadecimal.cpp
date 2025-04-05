class Solution {
public:
    string toHex(int num) {
        if(!num)
            return "0";
        unsigned int ourNum = num;
        string str;
        string our_str {"0123456789abcdef"};
        while(ourNum){
            str = our_str[ourNum%16]+str;
            ourNum/=16;
        }
    return str;
    }
};
