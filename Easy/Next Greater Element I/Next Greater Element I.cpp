class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        bool flag = false, flag2 = false;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(flag && nums1[i]<nums2[j]){
                    vec.push_back(nums2[j]);
                    flag2=true;
                    break;
                }
                if(nums1[i]==nums2[j])
                    flag = true;
            }
            if(!flag2){
                vec.push_back(-1);
            }
            flag = false;
            flag2 = false;
        }
    return vec;
    }
};
