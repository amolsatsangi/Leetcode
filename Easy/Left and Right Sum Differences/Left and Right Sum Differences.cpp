class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left_sum, right_sum, answer;
        int j{0}, sum{0};
        for(int i=0;i<nums.size();i++){
            left_sum.push_back(sum);
            sum = sum+nums[i];
            cout<<left_sum[i] <<" ";
        }
        cout<<endl;
        sum =0;
        for(int i= nums.size()-1;i>=0;i--){
            right_sum.push_back(sum);
            sum +=nums[i];
             cout<<right_sum[j] <<" ";
             j++;
        }
         cout<<endl;
        for(int i =0;i<nums.size();i++){
            sum = left_sum[i]-right_sum[nums.size()-1-i]>0?left_sum[i]-right_sum[nums.size()-1-i]:right_sum[nums.size()-1-i]-left_sum[i];
            answer.push_back(sum);
             cout<<sum <<" ";
        }
    return answer;
    }
};
