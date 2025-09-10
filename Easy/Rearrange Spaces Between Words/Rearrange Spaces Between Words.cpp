class Solution {
public:
    string reorderSpaces(string text) {
        int count1{0}, count2{0};
        for(int i=0;i<text.size();i++){
            if(text[i]==' '){
                count1++;
            }
            else{
                while(i+1<text.size() && text[i+1]!=' ')
                    i++;
                count2++;
            }
        }
        int space, last;
        if(count1==0)
            return text;
        if(count2==1){
            space = 0;
            last = count1;
        }
    else{
         space = count1/(count2-1);
         last = count1%(count2-1);
    }
    string str{""},ans;
    for(int i=0;i<text.size();i++){
            if(text[i]==' ' && str.size()>0){
                ans+=str;
                ans+=(string(space,' '));
                while(i+1<text.size() && text[i+1]==' ')
                    i++;
                str="";
            }
            else if(text[i]!=' '){
                str+=text[i];
            }
        }
        if(str.size()>0){
            ans+=str;
        }
        else{
            ans = ans.substr(0,ans.size()-space);
        }
         ans+=(string(last,' '));
    return ans;
    }
};
