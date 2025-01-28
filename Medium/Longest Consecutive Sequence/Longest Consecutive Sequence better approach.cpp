class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi{0}, count{0};
        set<int> nset;
        for(int i=0;i<nums.size();i++){
            nset.insert(nums[i]);
        }
        set<int>::iterator itr = nset.begin();
        int temp = *itr;
        for(auto c:nset){
            cout<<temp<<" "<<c<<endl;
            if(c==temp){
                count++;
                maxi=max(maxi,count);
                temp++;
            }
            else{
                temp=++c;
                count = 1;
                maxi=max(maxi,count);
            }
        }
    return maxi;
    }
};
