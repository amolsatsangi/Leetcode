class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        vector<int> ans;
        for(auto ele : umap){
            if(ele.second == 1)
                ans.push_back(ele.first);
            if(ans.size()==2)
                break;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
