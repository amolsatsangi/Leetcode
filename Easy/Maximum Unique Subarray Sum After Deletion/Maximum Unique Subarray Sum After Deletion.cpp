class Solution {
public:
    int maxSum(vector<int>& nums) {
        int maxi{INT_MIN};
        unordered_map<int,int> umap;
        for(int i=0;i<nums.size();i++){
            maxi = max(maxi,nums[i]);
            umap[nums[i]]++;
        }
        if(maxi<0)
            return maxi;
        int sum{0};
        for(auto i:umap){
            if(i.first>0)
                sum+=i.first;
        }
    return sum;
    }
};
