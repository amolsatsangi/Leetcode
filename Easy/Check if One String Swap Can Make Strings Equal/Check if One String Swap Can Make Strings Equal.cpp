class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.size()!=s2.size())
            return false;
        int i=0,j=s1.size()-1;
        while(i<s1.size() && j>=0){
            if(s1[i]==s2[i])
                i++;
            else if(s1[j]==s2[j])
                j--;
            else{
                swap(s1[i],s1[j]);
                break;
            }
        }
        return s1==s2;
    }
};
