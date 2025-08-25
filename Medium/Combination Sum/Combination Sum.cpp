class Solution {
public:
    void generate_combination(vector<int>& candidates,int target,vector<vector<int>> & ans,vector<int>& vec,int i){
        if(target==0){
            ans.push_back(vec);
            return;
        }
        else if(target<0)
            return;
        if(i>=candidates.size())
            return;
        vec.push_back(candidates[i]);
        generate_combination(candidates,target-candidates[i],ans,vec,i);
        vec.pop_back();
        generate_combination(candidates,target,ans,vec,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> comb_vec;
        vector<int> vec;
        generate_combination(candidates,target,comb_vec,vec,0);
        return comb_vec;
    }
};
