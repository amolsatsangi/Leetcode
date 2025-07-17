class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxi{0};
        for(int i=0;i<strs.size();i++){
            int count = strs[i].size();
            bool flag{false};
            for(int j=0;j<count;j++){
                if(strs[i][j]<'0' || strs[i][j]>'9'){
                    flag = true;
                    break;
                }
            }
            if(flag)
                maxi = max(count,maxi);
            if(!flag){
                int num = stoi(strs[i]);
                maxi = max(num,maxi);
            }
        }
    return maxi;
    }
};
