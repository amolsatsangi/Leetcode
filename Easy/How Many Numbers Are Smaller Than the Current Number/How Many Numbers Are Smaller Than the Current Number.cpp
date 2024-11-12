class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>answer{};
        for(int i=0;i<nums.size();i++){
            int counter{0};
            for(int j=0;j<nums.size();j++){
                if(j==i)
                    continue;
                if(nums[i]>nums[j])
                    counter++;
            }
            answer.push_back(counter);
        }
    return answer;
    }
};
