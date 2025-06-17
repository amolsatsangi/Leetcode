class Solution {
public:
    static bool compare(vector<int> &p1, vector<int> &p2){
        return p1[0]<p2[0];
    }
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int,int> umap;
        for(int i=0;i<nums1.size();i++)
            umap[nums1[i][0]] = nums1[i][1];
        for(int i=0;i<nums2.size();i++){
            umap[nums2[i][0]] += nums2[i][1];
        }
        vector<vector<int>> vec;
        for(auto e:umap){
            vec.push_back({e.first,e.second});
        }
        sort(vec.begin(),vec.end(),compare);
    return vec;
    }
};
