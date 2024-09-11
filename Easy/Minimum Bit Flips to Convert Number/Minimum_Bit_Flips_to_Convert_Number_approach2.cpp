/********************************************************************
###########################
# Author : @Amol Satsangi #
# 11 Sept 2024            #
###########################

Approach :
 1. Find XOR of start and goal
 2. Find out how many 1's are there in XOR ouput's binary form
******************************************************************/

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xor_output{0}, min{0};
        xor_output = start ^ goal;
        while(xor_output) {
            min += (1 & (xor_output%2));
            xor_output = xor_output/2;
        }
    return min;
    }
};
