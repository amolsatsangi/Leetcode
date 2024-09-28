class Solution {
public:
    int minElement(vector<int>& nums) {
    vector<int> Final_nums{};
    int sum = 0;
        for(int i=0;i<nums.size();i++){
            int n = nums[i], total{0}; 
            while(n){
                total+=n%10;
                n/=10;
            }
        if(i==0)
            sum = total;
        if(total<sum)
            sum =  total;
    }
    return sum;
    }
};
