class MedianFinder {
public:
    vector<int>arr;
    MedianFinder() {
    }
    
    void addNum(int num) {
        arr.push_back(num);
    }
    
    double findMedian() {
        int s=arr.size();
        double ans;
        if(s%2==0){
            ans=(arr[s/2]+arr[(s/2)-1])*1.0/2;
        }
        else{
            ans=arr[s/2];
        }
        return ans;
    }
};
