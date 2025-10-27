class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev{0}, beams{0};
        for(int i=0;i<bank.size();i++){
            int count = std::count(bank[i].begin(),bank[i].end(),'1');
            if(count ==0)
                continue;
            beams += (prev * count);
            prev = count;
        }
    return beams;
    }
};
