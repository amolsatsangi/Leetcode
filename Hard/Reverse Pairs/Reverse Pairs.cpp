class Solution {
public:
    void merge(vector<int>& nums,int low,int mid,int end,vector<int>& temp){
        int i = low, j = mid+1;
        int k = low;
        while(i<=mid && j<=end){
            if(nums[i]<nums[j])
                temp[k++]=(nums[i++]);
            else
                temp[k++] =(nums[j++]);
        }
        while(i<=mid){
            temp[k++] = (nums[i++]);
        }
        while(j<=end){
            temp[k++] = (nums[j++]);
        }
        for(int i = low;i<=end;i++){
            nums[i]= temp[i];
        }
    }
    int countPairs(vector<int>& nums,int low,int mid,int end){
        int count{0};
        int j = mid+1;
        for(int i = low;i<=mid;i++){
            while(j<=end && (long long) nums[i] > 2LL * nums[j]){
                j++;
            }
            count += (j-mid-1);
        }
        return count;
    }
    int mergesort(vector<int>& nums, int low, int end,vector<int>& temp){
        int count{0};
        if(low>=end)
            return count;
        int mid = (low+end)/2;
        count += mergesort(nums,low,mid,temp);
        count += mergesort(nums,mid+1,end,temp);
        count += countPairs(nums,low,mid,end);
        merge(nums,low,mid,end,temp);

        return count;
    }
    int reversePairs(vector<int>& nums) {
        vector<int> temp (nums.size());
        return mergesort(nums,0,nums.size()-1,temp);
    }
};
