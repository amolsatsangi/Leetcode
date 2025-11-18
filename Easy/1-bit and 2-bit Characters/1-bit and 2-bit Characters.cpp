class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int count{0};
        for(int i=0;i<bits.size();i++){
            if(bits[i]==1){
                count+=2;
                i++;
                if(count == bits.size())
                    return false;
            }
            else{
                count++;
            }
        }
        return true;
    }
};
