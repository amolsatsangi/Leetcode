class Solution {
public:
    vector<int> baseUnitConversions(vector<vector<int>>& conversions) {
        unordered_map<int,int> umap;
        int base;
        for(int i=0;i<conversions.size();i++){
            if(conversions[i][0]==0){
                umap[conversions[i][1]] = conversions[i][2];
                base = conversions[i][1];
            }
            else{
                long long int factor = (1LL * conversions[i][2] * umap[conversions[i][0]])%1000000007;
                umap[conversions[i][1]] = factor;
            }
        }
        vector<int> vec(conversions.size()+1);
        vec[0]=1;
        for(int i=1;i<=conversions.size();i++){
            vec[i]=umap[i];
        }
    return vec;
    }
};
