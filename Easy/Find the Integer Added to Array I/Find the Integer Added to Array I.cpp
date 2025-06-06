class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        long int sum1{0},sum2{0};
        for(int i=0;i<nums1.size();i++){
            sum1+=nums1[i];
            sum2+=nums2[i];
        }
        int n = nums1.size();
        return (sum2-sum1)/n;
    }
};
