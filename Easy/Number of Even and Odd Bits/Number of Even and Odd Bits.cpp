class Solution {
public:
    vector<int> evenOddBit(int n) {
        string  binary{""};
        while(n){
            int temp = n%2;
            n/=2;
            binary=binary+to_string(temp);
        }
        int e{0},o{0};
        for(int i=0;i<binary.size();i++){
            if(i%2==0 && binary[i]=='1')
                e++;
            else if(i%2==1 && binary[i]=='1')
                o++;
        }
        return {e,o};
    }
};
