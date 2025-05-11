class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2!=0){
                int j=i;
                for(j=i;j<i+3 && j<arr.size();j++){
                    if(arr[j]%2==0)
                        break;
                }
            if(j==i+3)
                return true;
            else 
                i=j;
            }
        }
    return false;
    }
};
