class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = *max_element(candies.begin(), candies.end());
        vector<bool> result_bool;
        for(int i = 0; i<candies.size();i++){
            if(candies[i]+extraCandies>=max)
                result_bool.push_back(true);
            else
                result_bool.push_back(false);
        }
    return result_bool;
    }
};
