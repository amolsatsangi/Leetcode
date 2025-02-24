class Solution {
public:
    string reverseOnlyLetters(string s) {

        int i=0, j=s.length();        
        while(i < j) {
            while(!isalpha(s[i])) {
                i++;
                if(i == j) return s;
            }
            while(!isalpha(s[j])) j--;

            swap(s[i],s[j]);
            cout << s <<endl;
            i++;
            j--;
        }
        return s;
    }
};
