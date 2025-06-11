class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        int maxi{0};
        for(int i=0;i<nums.size();i++)
            maxi = max(maxi, nums[i]);
        vector<int> factors(maxi+1,1);
        for(int i=0;i<factors.size();i++)
            factors[i]=i;
        for(int i=2;i<factors.size();i++){
            if(factors[i]==i){
                for(int j=i*i;j<factors.size();j=j+i){
                    factors[j]=i;
                }
            }
        }
        set<int> s;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            while(num!=factors[num] && num!=1){
                s.insert(factors[num]);
                num/=factors[num];
            }
            if(num>1)
                s.insert(num);
        }
        return s.size();
    }
};
