/***********************************************
####################################
@author : Amol Satsangi 
Date : 22 september 2024
Approach : 
> Used hashmap to assign integer values to each roman numeral
> Iterate over string
> if s[i]<s[i+1] => ans -= map[s[i]]
> else ans += map[s[i]]
#####################################
*******************************************************/
class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        unordered_map<char, int> map;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;
        for(int i=0;i<s.size();i++){
            if(i!= s.size() && map[s[i]]<map[s[i+1]]){
                num = num - map[s[i]];
            }
            else{
                 num = num + map[s[i]];
            }
        }
    return num;
    }
};
