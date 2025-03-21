class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image.size()/2;j++)
                swap(image[i][j],image[i][image.size()-1-j]);
        }

        for(int i=0;i<image.size();i++){
            for(int j=0;j<image.size();j++){
                image[i][j]= image[i][j]^1;
            }
        }

        return image;
    }
};
