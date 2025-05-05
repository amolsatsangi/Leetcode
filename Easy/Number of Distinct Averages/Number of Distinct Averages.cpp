class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        double average;
        unordered_map<double,int> umap;
        int n= nums.size();
        set<double> s;
        for(int i=0;i<nums.size()/2;i++){
            average = (nums[i]+nums[n-i-1])/2.0;
            s.insert(average);
        }
    return s.size();
    }
};
