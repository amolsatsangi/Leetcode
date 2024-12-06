class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
       int sum{0},count{0},i{1};
       unordered_map<int,int> umap{};
       for(int i=0;i<banned.size();i++){
            umap[banned[i]]++;
       }
       while(i<=n && sum < maxSum){
        if(!umap.count(i)){
            sum+=i;
            count++;
        }
        i++;
       }
       if(sum>maxSum)
        count--;
       return count;
    }
};
