class MedianFinder {
public:
//optimse approach
priority_queue<int>left;
//make two heap 1 st max heap
priority_queue<int,vector<int>,greater<int>>right;
    MedianFinder() {
        //default constructor
    }
    
    void addNum(int num) {
        if(left.size()==0||left.top()>num){
            left.push(num);
        }
        else
        right.push(num);
        //fill hua then
        
        if(left.size()>right.size()+1){
            right.push(left.top());
            left.pop();
        }
        if(right.size()>left.size()+1){
            left.push(right.top());
            right.pop();
        }
        
    }
    
    double findMedian() {
        if(left.size()==right.size()){
            //average return hoga median
            return (left.top()+right.top())/2.0;
        }
        else if(left.size()>right.size()){
            return left.top();
        }
        else
        return right.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */