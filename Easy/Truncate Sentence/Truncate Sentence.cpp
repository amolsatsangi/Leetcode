class Solution {
public:
    string truncateSentence(string s, int k) {
        int count{0},temp{0};
        for(auto c:s){
            if(c==' ')
                count++;
            if(count == k)
                break;
            temp++;
        }
        return s.substr(0,temp);
    }
};
