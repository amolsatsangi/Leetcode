class Solution {
public:
    int getLucky(string s, int k) {
        string str;
        int sum{0};
        for(char c:s){
            str+=to_string((c-'a')+1);
        }
        for(char c:str)
            sum+=(c-'0');
        int total{0};
        int t=sum;
        for(int j=1;j<k;j++){
            while(t){
                int temp = t%10;
                total+=temp;
                t/=10;
            }
            t= total;
            total=0;
            if(t<9)
                break;
        }
    return t;
    }
};
