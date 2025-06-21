class Solution {
public:
    string removeTrailingZeros(string num) {
        int count{0};
        for(int i=num.size()-1;i>=0;i--){
            if(num[i]!='0')
                break;
            count++;
        }
    return num.substr(0,num.size()-count);
    }
};
