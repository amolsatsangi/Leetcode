class Solution {
public:
    void generate(vector<int>& candidates,int target, vector<vector<int>> & ans,vector<int> &vec, int i){
        if(target == 0){
                ans.push_back(vec);
                return;
        }
        if(i==candidates.size() || target<0){    
            return;
        }
        vec.push_back(candidates[i]);
        generate(candidates,target-candidates[i],ans,vec,i+1);
        vec.pop_back();
        for(int j=i+1;j<candidates.size();j++){
            if(candidates[j]!=candidates[i]){
                generate(candidates,target,ans,vec,j);
                break;
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> vec;
        generate(candidates,target,ans,vec,0);
        return ans;
    }
};
