class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> vec(n);
            for(int i=0;i<vec.size()/2;i++){
                vec[i]=i-vec.size()/2;
                vec[vec.size()-i-1]=vec.size()/2-i;
            }
    return vec;
    }
};
