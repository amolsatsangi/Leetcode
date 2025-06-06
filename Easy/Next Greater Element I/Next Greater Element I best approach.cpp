class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        unordered_map<int,int> umap;
        stack<int> st;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i])
                st.pop();
            if(st.empty())
                umap[nums2[i]]=-1;
            else
                umap[nums2[i]]=  st.top();
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++)
            vec.push_back(umap[nums1[i]]);
    return vec;
    }
};
