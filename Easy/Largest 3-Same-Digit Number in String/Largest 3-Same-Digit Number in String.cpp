class Solution {
public:
    string largestGoodInteger(string num) {
        for(int i=9;i>=0;i--){
            string str = to_string(i)+to_string(i)+to_string(i);
            if(num.find(str)!=string::npos)
                return str;
        }
    return "";
    }
};
