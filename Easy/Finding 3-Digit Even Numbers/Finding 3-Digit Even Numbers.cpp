class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;
        for(int i=0;i<digits.size();i++){
            for(int j=0;j<digits.size();j++){
                int num=0;
                for(int k=0;k<digits.size();k++){
                    if(digits[k]==0)
                        continue;
                    else if(i!=j && j!=k && i!=k && digits[i]%2==0){
                        num= digits[i]+10*digits[j]+100*digits[k];
                        if(find(ans.begin(),ans.end(),num)==ans.end())
                            ans.push_back(num);
                    }
                }
            }
        }
    sort(ans.begin(),ans.end());
    return ans;
    }
};
