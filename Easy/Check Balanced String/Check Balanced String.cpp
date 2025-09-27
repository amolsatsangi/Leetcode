class Solution {
public:
    bool isBalanced(string num) {
        int even{0},odd{0};
        int i{0};
        for(char c: num){
            if(i%2==0){
                even+=(c-'0');
            }
            else{
                odd+=(c-'0');
            }
        i++;
        }
        
    return odd == even;
    }
};
