class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> intersection_map{};
        vector<int> intersection_vector{};
        for(int i=0;i<nums1.size();i++){
            intersection_map[nums1[i]] =  intersection_map[nums1[i]]+1;
        }
        sort(nums2.begin(), nums2.end());
        int last = -1;
        for(int j=0;j<nums2.size();j++){
            if(intersection_map.find(nums2[j])!=intersection_map.end() && last != nums2[j]){
                intersection_vector.push_back(nums2[j]);
                last = nums2[j];
            }
        }
    return intersection_vector;
    }
};
