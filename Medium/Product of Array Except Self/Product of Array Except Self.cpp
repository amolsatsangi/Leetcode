class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product{1};
        int count{0};
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
                product*=nums[i];
            else
                count++;
        }
        cout<<count<<endl;
        for(int i=0;i<nums.size();i++){
            if(count>1){
                nums[i]=0;
            }
            else if(count==1){
                if(nums[i]==0)
                    nums[i]=product;
                else
                    nums[i]=0;
            }
            else
                nums[i]=product/nums[i];
        }
        return nums;
    }
};
