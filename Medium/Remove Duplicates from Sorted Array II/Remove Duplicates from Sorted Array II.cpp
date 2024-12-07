class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> umap;
        int count{0};
        for(int i=0;i<nums.size()-count;i++){

            umap[nums[i]]++;
            if(umap[nums[i]]>2){
                count++;
                int j=i;
                while(j<(nums.size()-1)){
                    nums[j]=nums[j+1];
                    j++;
                }
                i--;
            }
        }
        return nums.size()-count;
    }
};
