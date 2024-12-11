class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i{0},j{0};
        vector<int> intersection_array{};
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j])
                i++;
            else if(nums1[i]>nums2[j])
                j++;
            else{
                if(!intersection_array.size() || intersection_array.back() != nums1[i])
                    intersection_array.push_back(nums1[i]);
                i++;
                j++;
                
            }
        }
    return intersection_array;
    }
};
