class Solution {
public:
    char kthCharacter(int k) {
        string str ="a", temp="";
        int j=0;
        while(str.size()<500){
            temp = str;
            j=0;
            while(j<temp.size()){
                if(temp[j]=='z')
                    temp[j] == 'a';
                else
                    temp[j] = temp[j]+1;
                j++;
            }
            str +=temp;
        }
    return str[k-1];
    }
};
