class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int diff{INT_MAX};
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            diff = min(arr[i]-arr[i-1],diff);
        }
        vector<vector<int>> ans;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]==diff){
                ans.push_back({arr[i-1],arr[i]});
            }
        }
    return ans;
    }
};
