class Solution {
public:
    int countKeyChanges(string s) {
        int count{0};
        char last = tolower(s[0]);
        cout<<last<<endl;
        for(int i=1;i<s.size();i++){
            if(tolower(s[i])!=last){
                count++;
                last = tolower(s[i]);
            }
        }
        return count;
    }
};
