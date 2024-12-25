class Solution {
public:
    string addBinary(string a, string b) {
        string str="";
        char carry = '2';
        int i=a.size()-1,j=b.size()-1;
        while(i>=0 && j>=0){
            if(a[i] == '1' && b[j]=='1'){
                if(carry == '1')
                    str='1'+str;
                else
                    str='0'+str;
                carry = '1';
            }
            else if(a[i] =='1' || b[j] == '1'){
                if(carry == '1'){
                    str='0'+str;
                    carry = '1';
                }
                else{
                    str = '1'+str;
                    carry = '0';
            }
            }
            else{
                if(carry=='1'){
                    str='1'+str;
                    carry='0';
                }
                else{
                    str='0'+str;
                    carry='0';
                }
            }
            i--;j--;
        }
        while(i>=0){
            if(a[i]=='1'){
                if(carry=='1'){
                    str='0'+str;
                    carry='1';
                }
                else{
                    str='1'+str;
                    carry='0';
                }
            }
            else{
                if(carry=='1'){
                    str='1'+str;
                    carry='0';
                }
                else{
                    str='0'+str;
                    carry='0';
                }
            }
            i--;
            
        }
        while(j>=0){

            if(b[j]=='1'){
                if(carry=='1'){
                    str='0'+str;
                    carry='1';
                }
                else{
                    str='1'+str;
                    carry='0';
                }
            }
            else{
                if(carry=='1'){
                    str='1'+str;
                    carry='0';
                }
                else{
                    str='0'+str;
                    carry='0';
                }
            }
            j--;
        }
        while(carry=='1'){
            str='1'+str;
            carry='0';
        }
    return str;
}
};
