class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> counter(n+1,0);
        for(int i=0;i<trust.size();i++){
            counter[trust[i][0]]--;
            counter[trust[i][1]]++;
        }
        for(int i=1;i<counter.size();i++){
            if(counter[i]==n-1)
                return i;
        }
        return -1;
    }
};
