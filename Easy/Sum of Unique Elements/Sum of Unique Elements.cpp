class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++)
            umap[nums[i]]++;
        int sum{0};
        for(auto i : umap){
            if(i.second==1)
                sum+=i.first;
        }
    return sum;
    }
};
