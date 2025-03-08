class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++)
            umap[nums[i]]++;
        for(auto c:umap){
            if(c.second==1)
                return c.first;
        }
        return -1;
    }
};
