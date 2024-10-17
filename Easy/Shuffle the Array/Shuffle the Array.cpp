class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> final_vector;
        for(int i=0;i<n;i++){
            final_vector.push_back(nums[i]);
            final_vector.push_back(nums[i+n]);
        }
    return final_vector;
    }
};
