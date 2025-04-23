class Solution {
public:
    int countLargestGroup(int n) {
       unordered_map<int,int> umap;
       for(int i=1;i<=n;i++){
            int j =i, temp;
            int sum{0};
            while(j){
                sum+=j%10;
                j/=10;
            }
            cout<<sum<<" ";
            umap[sum]++;
       }
       int maxi{0},count{0};
       for(auto i: umap){
            maxi = max(maxi,i.second);
       }
       for(auto i: umap){
            if(maxi == i.second)
                count++;
       }
    return count;
    }
};
