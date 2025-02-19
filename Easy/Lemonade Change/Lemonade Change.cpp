class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int ten{0},five{0},twenty{0};
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5)
                five++;
            else if(bills[i]==10){
                ten++;
                five--;
                if(five<0)
                    return false;
            }
            else{
                twenty++;
                if(ten){
                    ten--;five--;
                }
                else
                    five-=3;
                if(five<0)
                    return false;
            }
        }
    return true;
    }
};
