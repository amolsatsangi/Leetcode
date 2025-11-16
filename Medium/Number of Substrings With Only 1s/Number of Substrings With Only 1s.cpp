class Solution {
public:
    int numSub(string s) {
        long int ans{0};
        long int count{0};
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')
                count++;
            else{
                ans += (((count)*(count+1))/2)%(int (pow(10,9) + 7));
                count=0;
            }
        }
        ans += ((count)*(count+1))/2;
    return ans;
    }
};
