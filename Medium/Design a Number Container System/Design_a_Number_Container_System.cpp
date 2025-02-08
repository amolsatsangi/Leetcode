#include <queue>
#include <unordered_map>
using namespace std;

class NumberContainers {
public:

    unordered_map<int, priority_queue<int,vector<int>, greater<int>>> container;
    unordered_map<int,int> index_val;

    NumberContainers() {}   
    
    void change(int index, int number) {
        if(index_val.count(index))
        {
            int prevNum = index_val[index];
            if(prevNum == number) // same number => no need
                return;
            container[prevNum].push(index);
        }
        container[number].push(index);
        index_val[index] = number;
    }
    
    int find(int number) {
        if(container.count(number) == 0) return -1;

        while(!container[number].empty() && index_val[container[number].top()] != number) {
            container[number].pop();
        }
        return container[number].empty() ? -1 : container[number].top();
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
