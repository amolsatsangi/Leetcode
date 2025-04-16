class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int score{0}, maxi_score{INT_MIN};
        for(int i=0;i<k;i++)
            score+=cardPoints[i];
        int j=cardPoints.size()-1;
        maxi_score = score; 
        for(int i=k-1;i>=0;i--){
            score -= cardPoints[i];
            score += cardPoints[j];
            maxi_score = max(maxi_score, score);
            j--;
        }
    return maxi_score; 
    }
};
