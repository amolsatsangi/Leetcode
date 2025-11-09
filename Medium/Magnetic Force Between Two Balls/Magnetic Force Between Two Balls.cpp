class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int ans{-1};
        int start = 1, end = position.back()-position.front();
        while(start<=end){
            int mid = (start+end)/2;
            int k= m-1;
            int last = 0;
            for(int j=1;j<position.size();j++){
                if(position[j]-position[last]>=mid){
                    k--;
                    last = j;
                }
                if(!k)
                    break;
            }
            if(k==0){
                start = mid+1;
            }
            else{
                end = mid - 1;
            }
        }
    return end;
    }
};
