class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_height{0}, local_height{0};
        for(int i=0;i<gain.size();i++){
            local_height = local_height+gain[i];
            max_height = max(max_height, local_height);
        }
        return max_height;
    }
};
