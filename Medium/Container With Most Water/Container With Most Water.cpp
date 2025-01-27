class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi{INT_MIN};
        int i{0}, j = height.size()-1;
        while(i<j){
           int temp = min(height[i],height[j])*(j-i);
           maxi = max(temp,maxi);
           if(height[i]<height[j])  i++;
            else  j--;
        }
        return maxi;
    }
};
