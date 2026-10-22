class Solution {
public:
    int check(int mid,vector<int> & vec,int n){
        if(mid==n-1)
            return 1;
        if(vec[mid]>vec[mid+1])
            return 1;
        return 0;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int low{0},high{n-1},ans{-1};
        while(low<=high){
            int mid = low+(high-low)/2;
            if(check(mid,arr,n)==1){
                high = mid-1;
                ans = mid;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};
