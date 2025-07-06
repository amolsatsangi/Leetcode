class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++)
            umap[nums[i]]++;
        int maxi{0};
        for(auto i:umap){
            maxi = max(maxi,i.second);
        }
        int count{0};
        for(auto i:umap){
            if(i.second == maxi)
                count+=i.second;
        }
    return count;
    }
};
