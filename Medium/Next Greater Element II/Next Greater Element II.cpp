class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> vec(nums.size());
        stack<int> st;
        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i])
                st.pop();
            st.push(nums[i]);
        }
        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i])
                st.pop();
            if(st.empty())
                vec[i]=-1;
            else 
                vec[i]=st.top();
            st.push(nums[i]);
        }
        return vec;
    }
};
