class Solution {
public:
    int check(int mid,vector<int> & vec, int n){
        if(vec[mid]<=vec[n-1]){
            return 1;
        }
        return 0;
    }
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low{0}, high{n-1},ans{-1};
        while(low<=high){
            int mid = (low+high)/2;
            if(check(mid,nums,n)==1){
                high = mid-1;
                ans = mid;
            }
            else{
                low = mid+1;
            }
        }
        return nums[ans];
    }
};
