class Solution {
public:
    int totalMoney(int n) {
        int sum{0},j{0};
        bool flag{false};
        while(n){
        for(int i=1+j;i<8+j;i++){
            if(!n){
                flag = true;
                break;
            }
            sum+=i;
            n--;
        }
        if(flag)
            break;
        j++;
        }
        
    return sum;
    }
};
