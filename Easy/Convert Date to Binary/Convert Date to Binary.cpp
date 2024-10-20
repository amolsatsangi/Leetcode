#include <typeinfo>

class Solution {
public:
    string string_to_binary(int num){
        string bin{""};
        while(num){
            bin = to_string(num%2)+bin;
            num/=2;
        }
        return bin;
    }
    string convertDateToBinary(string date) {
        string year = string_to_binary(stoi(date.substr(0,4)));
        string month = string_to_binary(stoi(date.substr(5,2)));
        string day =  string_to_binary(stoi(date.substr(8,2)));
        return year+"-"+month+"-"+day;
    }
};
