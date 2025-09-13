class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,int> umap;
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());
        set<int> s3(nums3.begin(),nums3.end());
        for(auto c : s1){
            umap[c]++;
        }
        for(auto c : s2){
            umap[c]++;
        }
        for(auto c : s3){
            umap[c]++;
        }
        vector<int> vec;
        for(auto u : umap){
            if(u.second>1)
                vec.push_back(u.first);
        }
    return  vec;
    }
};
