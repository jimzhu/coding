class MedianFinder {
public:
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int> > min_heap;

    // Adds a number into the data structure.
    void addNum(int num) {
        if (!min_heap.empty() && num >= min_heap.top()) {
            min_heap.push(num);
        }
        else {
            max_heap.push(num);
        }
        if (min_heap.size()  >= 2 + max_heap.size()) {
            max_heap.push(min_heap.top());
            min_heap.pop();
        }
        else if (max_heap.size() >= 2 + min_heap.size()) {
            min_heap.push(max_heap.top());
            max_heap.pop();
        }
    }

    // Returns the median of current data stream
    double findMedian() {
        if (max_heap.size() > min_heap.size()) {
            return max_heap.top();
        }
        else if (max_heap.size() < min_heap.size()) {
            return min_heap.top();
        }
        else return (max_heap.top() + min_heap.top()) / 2.0;
    }
};

// Your MedianFinder object will be instantiated and called as such:
// MedianFinder mf;
// mf.addNum(1);
// mf.findMedian();