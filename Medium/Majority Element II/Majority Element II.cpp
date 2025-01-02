class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans{};
        unordered_map<int,int> umap{};
        for(int i=0;i<nums.size();i++)
            umap[nums[i]]++;
        int n=nums.size()/3;
        for(auto c: umap){
            if(c.second>n)
                ans.push_back(c.first);
        }
    return ans;
    }
};
