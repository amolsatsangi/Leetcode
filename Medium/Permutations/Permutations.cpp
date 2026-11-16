class Solution {
public:
    void generate_permutations(vector<int>& nums,vector<vector<int>> & ans,int i,int n){
        if(i==n){
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<n;j++){
            swap(nums[i],nums[j]);
            generate_permutations(nums,ans,i+1,n);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        generate_permutations(nums,ans,0,n);
        return ans;
    }
};
