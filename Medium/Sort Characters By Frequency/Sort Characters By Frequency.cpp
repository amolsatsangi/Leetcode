class Solution {
public:
    static bool comparator(pair<int,int> p1, pair<int,int> p2){
        if(p1.first>p2.first) return true;
        if(p2.first>p1.first) return false;
        if(p2.second>p1.second) return true;
        return false;
    }
    string frequencySort(string s) {
        pair<int,int> freq[62];
        for(int i=0;i<62;i++){
            if(i<26)
                freq[i]={0,i+'a'};
            else if(i>=26 && i<52)
                freq[i]={0,i+'A'-26};
            else
                freq[i]={0,i+'0'-52};
        }
        
        for(char ch:s){
            if(ch>='a' && ch<='z')
                freq[ch-'a'].first++;
            else if(ch>='A' && ch<='Z')
                freq[ch-'A'+26].first++;
            else
                freq[ch-'0'+52].first++;
        }
        sort(freq,freq+62,comparator);
        string ans{""};
        for(int i=0;i<62;i++){
            if(freq[i].first>0)
            while(freq[i].first){
                ans+=freq[i].second;
                freq[i].first--;
            }
        }
    return ans;
    }
};
