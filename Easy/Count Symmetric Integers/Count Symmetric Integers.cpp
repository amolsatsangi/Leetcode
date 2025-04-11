class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        string str;
        int count{0};
        for(int i = low;i<=high;i++){
            str = to_string(i);
            if(str.size()%2!=1){
                int n1{0},n2{0},j{0};
                while(j<str.size()/2){
                    int temp = str[j]-'0';
                    n1+=temp;
                    int temp2 = (str[j+str.size()/2]-'0');
                    n2+=temp2;
                    j++;
                }
                if(n1==n2)
                    count++;
            }
        }
    return count;
    }
};
