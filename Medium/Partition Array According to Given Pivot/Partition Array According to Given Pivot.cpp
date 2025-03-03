class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        int pivot_count{0};
        for(int i : nums){
            if(i<pivot)
                ans.push_back(i);
            else if(i==pivot)
            pivot_count++;
        }
        for(int i=0;i<pivot_count;i++)
            ans.push_back(pivot);
        for(auto i: nums){
            if(i>pivot)
                ans.push_back(i);
        }
    return ans;
    }
};
