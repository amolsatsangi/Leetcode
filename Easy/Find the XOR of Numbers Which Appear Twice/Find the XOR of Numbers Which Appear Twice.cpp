class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++)
            umap[nums[i]]++;
        int xor_total{0};
        for(auto c: umap){
            if(c.second==2)
                xor_total^=c.first;
        }
        return xor_total;
    }
};
