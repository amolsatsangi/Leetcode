class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> vec;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key)
                vec.push_back(i);
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int mini{INT_MAX};
            for(int j=0;j<vec.size();j++){
                if(abs(i-vec[j])<=k){
                    mini = abs(i-j);
                    break;
                }
            }
            if(mini != INT_MAX){
                ans.push_back(i);
            }
        }
    return ans;
    }
};
