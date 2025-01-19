class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> x_points;
        for(int i=0;i<points.size();i++)
            x_points.push_back(points[i][0]);
        sort(x_points.begin(),x_points.end());
        int diff{INT_MIN};
        for(int i=1;i<x_points.size();i++){
            int temp_diff=x_points[i]-x_points[i-1];
            diff=max(diff,temp_diff);
        }
        return diff;
    }
};
