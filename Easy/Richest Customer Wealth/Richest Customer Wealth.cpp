Riclass Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_ans{0};
        for(int i =0; i<accounts.size();i++){
            int sum {0};
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            if(sum>max_ans)
                max_ans = sum;
        }
    return max_ans;
    }
};
