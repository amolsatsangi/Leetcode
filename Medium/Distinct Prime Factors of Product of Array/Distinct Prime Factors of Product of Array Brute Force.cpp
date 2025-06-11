class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            for(int j=2;j*j<=num;j++){
                while(num%j==0){
                    num/=j;
                    s.insert(j);
                }
            }
            if(num>1)
                s.insert(num);
        }
        return s.size();
    }
};
