class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int k{0};
        int maxi{0},mini{INT_MAX};
        for(int i=0;i<piles.size();i++){
            maxi = max(maxi, piles[i]);
        }
        int start{1},end{maxi};
        while(start<=end){
            int mid = (start+end)/2;
            long int total{0};
            for(int j=0;j<piles.size();j++){
                long int temp = piles[j]/mid;
                total+=temp;
                if(piles[j]%mid)
                    total++;
            }
            if(total<=h){
                end = mid-1;
            }
            else{
                start = mid+1;
            }   
        }
    return start;
    }
};
