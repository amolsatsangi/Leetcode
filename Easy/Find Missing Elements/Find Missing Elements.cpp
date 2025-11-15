class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int smallest{INT_MAX}, largest{INT_MIN};
        for(auto i:nums){
            smallest = min(smallest,i);
            largest = max(largest,i);
        }
        sort(nums.begin(),nums.end());
        int j{0};
        vector<int> vec;
        for(int i=smallest;i<=largest;i++){
            if(nums[j]!=i){
                vec.push_back(i);
            }
            else
                j++;
        }
        return vec;
    }
};
