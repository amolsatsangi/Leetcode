class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int maxi{0}, count{1};
        sort(nums.begin(),nums.end());
        int last{INT_MIN};
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1 == last){
                count++;
                last = nums[i];
            }
            else if(nums[i]!=last){
                count=1;
                last = nums[i];
            }
            maxi= max(maxi,count);
        }
    return maxi;
    }
};
