#include <ctype.h>
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> score;
        int sum{0};
        for(int i=0;i<operations.size();i++){
            if(operations[i][operations[i].size()-1]>='0' && operations[i][operations[i].size()-1]<='9'){
                int temp = stoi(operations[i]);
                score.push_back(temp);
            }
            else if(operations[i]=="+")
                score.push_back(score[score.size()-1]+score[score.size()-2]);
            else if(operations[i]=="D")
                score.push_back(score[score.size()-1]*2);
            else if(operations[i]=="C")
                score.erase(score.end()-1);
        }
    for(int  i:score){
        sum+=i;
    }
    return sum;
    }
};
