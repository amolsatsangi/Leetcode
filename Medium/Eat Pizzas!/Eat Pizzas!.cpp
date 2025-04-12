class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        int days = pizzas.size()/4;
        int odd = days%2==0?days/2:(days+1)/2;
        
        int even = days/2;
        cout<<odd<<endl;
        cout<<even<<endl;
        sort(pizzas.begin(),pizzas.end());
        long long int ans{0},n = pizzas.size(),i{0};
        int last = n-1;

        for(i=0;i<odd;i++){
           ans+=pizzas[last];
           last--;
        }
        last-=1;
        for(int j=0;j<even;j++){
            ans+=pizzas[last];
            last=last-2;
        }
        return ans;
    }
};
