class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        for(int i=1;i<nums.size();i++)
            nums[i]=nums[i]+nums[i-1];
        int maxi{nums[k-1]};
        for(int i=k;i<nums.size();i++){
            cout<<(nums[i]-nums[i-k])<<endl;
            maxi = max(maxi,(nums[i]-nums[i-k]));
        }
        if(nums.size()==k)
            return double(nums[k-1])/k;
        return double(maxi)/k;
    }
