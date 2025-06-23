class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count{0};
        for(int i=0;i<words.size();i++){
            string str = words[i];
            reverse(str.begin(),str.end());
            for(int j=i+1;j<words.size();j++){
                if(str==words[j]){
                    count++;
                    break;
                }
            }
        }
    return count;
    }
};
