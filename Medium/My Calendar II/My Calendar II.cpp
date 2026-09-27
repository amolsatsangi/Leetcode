class MyCalendarTwo {
    private:
        map<int,int> bookingEvents;
public:
    MyCalendarTwo() {
    }
    
    bool book(int startTime, int endTime) {
        bookingEvents[startTime]++;
        bookingEvents[endTime]--;
        int maxi{-1}, curr{0};
        for(auto it:bookingEvents){
            curr += it.second;
            maxi = max(maxi,curr);
            if(maxi>=3){
            bookingEvents[startTime]--;
            bookingEvents[endTime]++;
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */
