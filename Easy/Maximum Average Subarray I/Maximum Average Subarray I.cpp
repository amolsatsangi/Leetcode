class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        for(int i=1;i<nums.size();i++)
            nums[i]=nums[i]+nums[i-1];
        vector<int> arr;
        for(int i=0;i<k;i++)
            arr.push_back(nums[i]);
        for(int i=k;i<nums.size();i++)
            arr.push_back(nums[i]-nums[i-k]);
        int maxi{INT_MIN};
        for(int i=k-1;i<arr.size();i++)
            maxi=max(maxi,arr[i]);
        return double(maxi)/k;
    }
};
