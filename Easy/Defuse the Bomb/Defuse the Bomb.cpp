class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> vec(code.size());
        if(k==0)
            return vec;
        if(k>0){
            for(int i=0;i<code.size();i++){
                int sum{0};
                for(int j=1;j<=k;j++){
                    int k = (i+j)%code.size();
                    sum+=code[k];
                }
                vec[i]=sum;
            }
        }
        else{
            for(int i=code.size()-1;i>=0;i--){
                int sum{0};
                for(int j=1;j<=-k;j++){
                    int k = i-j;
                    if(k<0)
                        k+=code.size();
                    sum+=code[k];
                }
                vec[i]=sum;
            }
        }
    return vec;
    }
};
