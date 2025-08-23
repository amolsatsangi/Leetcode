class Solution {
public:
    void generate(vector<int> nums,vector<vector<int>> &superset,vector<int> &parent,int i){
        if(i==nums.size()){
            superset.push_back(parent);
            return;
        }
        generate(nums,superset,parent,i+1);
        parent.push_back(nums[i]);
        generate(nums,superset,parent,i+1);
        parent.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> superset;
        vector<int> parent;
        generate(nums,superset,parent,0);
        return superset;
    }
};
