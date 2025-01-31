class Solution {
public:
    int numberOfMatches(int n) {
        long int count{0};
        while(n!=1){
            if(n%2!=0){
                n--;
                n/=2;
                count+=n;
                n++; 
            }
            else{
                n/=2;
                count+=n;
            }
        }
    return count;
    }
};
