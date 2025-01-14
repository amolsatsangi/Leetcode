class Solution {
public:
    int maxDepth(string s) {
        int maxi{0},count{0};
        for(auto c:s){
            if(c=='(')
                count++;
            if(c==')')
                count--;
            maxi=max(maxi,count);
        }
        return maxi;
    }
};
