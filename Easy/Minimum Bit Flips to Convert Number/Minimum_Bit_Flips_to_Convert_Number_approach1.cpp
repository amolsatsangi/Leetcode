/**********************************************************
###########################
# Author : @Amol Satsangi #
# 11 Sept 2024            #
###########################

Approach :
 1. Change integer to binary
 2. Use XOR operator to check if bit needs to flip
*********************************************************/
class Solution {
public:
    int minBitFlips(int start, int goal) {
        vector<int> s, g;
        int i{0},j{0}, min{0};
        while(start){
            s.push_back(start % 2);
            start = start/2;
            i++;
        }
        while(goal){
            g.push_back(goal%2);
            goal = goal/2;
            j++;
        }
        while(i>j){
            g.push_back(0);
            j++;
        }
        while(i<j){
            s.push_back(0);
            i++;
        }
        for(i=0;i<g.size();i++){
            if(s[i] ^ g[i] ==1){
                min++;
            }
        }
    return min;
    }
};
