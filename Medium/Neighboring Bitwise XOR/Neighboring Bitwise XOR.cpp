class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int ans_xor{0};
        for(int i=0;i<derived.size();i++)
            ans_xor^=derived[i];
        if(ans_xor==0)
            return true;
        return false;
    }
};
