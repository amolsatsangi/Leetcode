class Solution {
public:
    void generate_permutations(vector<int>& nums,vector<vector<int>> & ans,int i){
        int n = nums.size();
        if(i==n){
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<n;j++){
            if(s.count(nums[j])){
                continue;
            }
            s.insert(nums[j]);
            swap(nums[i],nums[j]);
            generate_permutations(nums,ans,i+1);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        generate_permutations(nums,ans,0);
        return ans;
    }
};
