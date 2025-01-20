class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> umap;
        for(int i=0;i<nums1.size();i++){
            umap[nums1[i]]++;
        }
        vector<int> a;
        for(int i=0;i<nums2.size();i++){
            if(umap.count(nums2[i])==0){
                a.push_back(nums2[i]);
                umap[nums2[i]]=0;
            }
        }
        unordered_map<int,int> umap1;
        for(int i=0;i<nums2.size();i++){
            umap1[nums2[i]]++;
        }
        vector<int> b;
        for(int i=0;i<nums1.size();i++){
            if(umap1.count(nums1[i])==0){
                b.push_back(nums1[i]);
                umap1[nums1[i]]=0;
            }
        }
        return {b,a};
    }
};
