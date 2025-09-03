class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int,int> umap;
        for(int i=0;i<friends.size();i++){
            umap[friends[i]]++;
        }
        vector<int> vec;
        for(int i=0;i<order.size();i++){
            if(umap.count(order[i])!=0){
                vec.push_back(order[i]);
            }
        }
    return vec;
    }
};
