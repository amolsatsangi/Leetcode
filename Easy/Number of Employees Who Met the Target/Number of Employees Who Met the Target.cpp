class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int total_emp{0};
        for(int i=0;i<hours.size();i++){
            if(hours.at(i)>=target)
                total_emp++;
        }
    return total_emp;
    }
};
