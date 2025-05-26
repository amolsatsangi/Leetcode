class Solution {
public:
    int countPoints(string rings) {
        unordered_map<int,string> umap;
        for(int i=0;i<rings.size();i=i+2){
            umap[rings[i+1]]+=rings[i];
        }
        int count{0};
        for(auto i : umap){
            if(i.second.size()<3)
                continue;
            bool r{false},g{false},b{false};
            for(char c: i.second){
                if(c=='R')
                    r=true;
                else if(c=='G')
                    g=true;
                else
                    b=true;
            }
            if(r&&g&&b)
                count++;
        }
    return count;
    }
};
