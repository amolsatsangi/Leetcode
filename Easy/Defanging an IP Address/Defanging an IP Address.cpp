class Solution {
public:
    string defangIPaddr(string address) {
        string new_add{""};
        for(auto c : address){
            if(c=='.')
                new_add+="[.]";
            else
                new_add+=c;
        }
    return new_add;
    }
};
