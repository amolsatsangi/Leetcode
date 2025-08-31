class Solution {
public:
    void gcd(int & odd,int & even){
        if(odd==0){
            return;
        }
        else if(even == 0){
            return;
        }
        if(odd<even){
            even = (even%odd);
            gcd(odd,even);
        }
        else{
            odd = (odd%even);
            gcd(odd,even);
        }
    }
    int gcdOfOddEvenSums(int n) {
        int odd{0},even{0};
        odd = (n*(2*1+(n-1)*2))/2;
        even = (n*(2*2+(n-1)*2))/2;
        gcd(odd,even);
        if(odd ==0)
            return even;
        return odd;
    }
};
