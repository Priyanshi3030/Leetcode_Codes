class SmallestInfiniteSet {
public:
unordered_set<int> s;
priority_queue<int,vector<int>,greater<int>> pq;
int count;
    SmallestInfiniteSet() {
        count=1;
    }
    
    int popSmallest() {
        int ans;
        if(!pq.empty()){
            ans= pq.top();
            pq.pop();
            s.erase(ans);
            return ans;
        } 
        ans=count;
        count++;
        return ans;

    }
    
    void addBack(int num) {
    if(num<count && s.find(num)==s.end()){
        pq.push(num);
        s.insert(num);
    }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */