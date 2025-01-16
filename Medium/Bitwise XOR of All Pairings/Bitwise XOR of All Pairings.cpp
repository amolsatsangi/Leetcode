class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()%2==0 && nums2.size()%2==0)
            return 0;
        else if(nums1.size()%2!=0 && nums2.size()%2==0){
            int xor_ans=nums2[0];
            for(int i=1;i<nums2.size();i++)
                xor_ans^=nums2[i];
            return xor_ans;
        }
        else if(nums1.size()%2==0 && nums2.size()%2!=0){
            int xor_ans=nums1[0];
            for(int i=1;i<nums1.size();i++)
                xor_ans^=nums1[i];
            return xor_ans;
        }
        int xor_ans=nums1[0];
        for(int i=1;i<nums1.size();i++)
            xor_ans^=nums1[i];
        for(int i=0;i<nums2.size();i++)
            xor_ans^=nums2[i];
        return xor_ans;
    }
};
