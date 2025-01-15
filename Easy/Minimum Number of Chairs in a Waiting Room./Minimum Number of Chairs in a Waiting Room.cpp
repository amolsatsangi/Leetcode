class Solution {
public:
    int minimumChairs(string s) {
        int maxi{INT_MIN},count{0};
        for(auto c:s){
            if(c=='E')
                count++;
            else
                count--;
            maxi=max(maxi,count);
        }
    return maxi;
    }
};
