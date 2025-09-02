class Solution {
public:
    void generate(vector<int>& nums,vector<vector<int>> &ans,vector<int>& vec,int i){
        if(i==nums.size()){
            ans.push_back(vec);
            return;
        }
        vec.push_back(nums[i]);
        generate(nums,ans,vec,i+1);
        vec.pop_back();
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                generate(nums,ans,vec,j);
                return;
            }
        }
        generate(nums,ans,vec,nums.size());
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> vec;
        sort(nums.begin(),nums.end());
        generate(nums,ans,vec,0);
        return ans;
    }
};
