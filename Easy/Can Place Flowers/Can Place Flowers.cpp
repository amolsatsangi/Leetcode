class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m =n,count{0};
        if(!m || (flowerbed.size()==1 && flowerbed[0]==0))
            return true;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0){
                if(i==0 && i+1<flowerbed.size() && flowerbed[i+1]!=1){
                    flowerbed[i]=1;
                    count++;
                }
                else if(i==flowerbed.size()-1 && i-1>0 && flowerbed[i-1]!=1){
                    flowerbed[i]=1;
                    count++;
                }
                else if(i-1>0 && flowerbed[i-1]!=1 && flowerbed[i+1]!=1){
                    flowerbed[i]=1;
                    count++;
                }
            }
            if(count==n)
            return true;
        }
    return false;
    }
};
