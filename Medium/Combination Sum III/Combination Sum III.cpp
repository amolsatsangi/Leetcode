class Solution {
public:
    void generate(vector<int> & nums,int target,int & k,vector<vector<int>> & ans,vector<int> & vec,int i){
        if(target ==0 && vec.size()==k){
            ans.push_back(vec);
            return;
        }
        if(target<0 || vec.size()==k || i>=9)
            return;
        vec.push_back(nums[i]);
        generate(nums,target-nums[i],k,ans,vec,i+1);
        vec.pop_back();
        generate(nums,target,k,ans,vec,i+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> vec;
        vector<int> num{1,2,3,4,5,6,7,8,9};
        generate(num,n,k,ans,vec,0);
        return ans;
    }
};
