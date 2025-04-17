class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> mp;
        int i{0},j{1};
        int maxi{1};
        if(s.size()==0)
            return 0;
        mp[s[i]]=i;
        while(j<s.size()){
            if(mp.count(s[j])==0 || mp[s[j]]<i){
                mp[s[j]]=j;
                j++;
                maxi = max(maxi, j-i);
            }
            else{
                i = mp[s[j]]+1;
                mp[s[j]] = j;
                j++;
            }
        }
        return maxi;
    }
};
