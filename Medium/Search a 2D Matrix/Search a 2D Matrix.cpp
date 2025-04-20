class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top{0}, bottom= matrix.size()-1;
        int mid{0};
        while(top<=bottom){
            mid = (top+bottom)/2;
            if(matrix[mid][0]==target)
                return true;
            else if(matrix[mid][0]>target){
                bottom = mid-1;
            }
            else
                top = mid+1;
        }
        if(bottom == -1)
            return false;
        int left{0}, right= matrix[0].size()-1;
         while(left<=right){
            mid = (left+right)/2;
            if(matrix[bottom][mid]==target)
                return true;
            else if(matrix[bottom][mid]>target){
                right = mid-1;
            }
            else
                left = mid+1;
        }
    return false;
    }
};
