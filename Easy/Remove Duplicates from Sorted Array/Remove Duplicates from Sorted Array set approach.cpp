class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i{0};
        set<int> uset{};
        for(int i=0;i<nums.size();i++){
            uset.insert(nums[i]);
        }
        int j{0};
        for(auto i:uset){
            nums[j]=i;
            j++;
        }
        return uset.size();
    }
};
