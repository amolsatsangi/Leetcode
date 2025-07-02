class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> vec;
        for(int i=left;i<=right;i++){
            int n = i;
            bool flag{true};
            while(n){
                int temp = n%10;
                if(temp == 0 || i%temp!=0){
                    flag = false;
                    break;
                }
                n/=10;
            }
            if(flag)
                vec.push_back(i);
        }
    return vec;
    }
};
