class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int maxi{INT_MIN}, count{0};
        unordered_set<int> uset;
        for(int i=0;i<nums.size();i++)
            uset.insert(nums[i]);
        for(auto c:uset){
            if(uset.find(c-1)==uset.end()){
                count = 1;
                int x  = c;
                while(uset.find(x+1)!=uset.end()){
                    count++;
                    x++;
                }
                maxi= max(maxi,count);
            }
        }
    return maxi;
    }
};
