class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sorted_heights{heights};
        sort(sorted_heights.begin(),sorted_heights.end());
        int count{0};
        for(int i=0;i<sorted_heights.size();i++){
            if(heights[i]!=sorted_heights[i])
                count++;
        }
        return count;
    }
};
