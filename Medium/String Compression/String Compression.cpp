class Solution {
public:
    int compress(vector<char>& chars) {
        int count{1},k{0},i{1};
        char local_char=chars[0];
        for(i=1;i<chars.size();i++){
            if(chars[i]==local_char){
                count++;
            }
            else{
                if(count>1){
                    string t_str= to_string(count);
                    int j{0};
                    chars[k+j]=local_char;
                    while(j<t_str.size()){
                        chars[k+j+1]=t_str[j];
                        j++;
                    }
                    k+=j+1;
                }
                else if(count ==1){
                    chars[k]=local_char;
                    k++;
                }
                count = 1;
                local_char = chars[i];
            }
        }
        if(count>1){
                    string t_str= to_string(count);
                    int j{0};
                    chars[k+j]=local_char;
                    while(j<t_str.size()){
                        chars[k+j+1]=t_str[j];
                        j++;
                    }
                    k+=j+1;
                }
                else if(count ==1){
                    chars[k]=local_char;
                    k++;
                }
    return k;
    }
};
