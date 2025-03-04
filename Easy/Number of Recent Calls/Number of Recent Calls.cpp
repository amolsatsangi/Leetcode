class RecentCounter {
private:
    vector<int> q;
    int start;
public:
    RecentCounter() {
        start = 0;
    }
    
    int ping(int t) {
        q.push_back(t);
        while(q[start]<t-3000)
            start++;
        return q.size()-start;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
