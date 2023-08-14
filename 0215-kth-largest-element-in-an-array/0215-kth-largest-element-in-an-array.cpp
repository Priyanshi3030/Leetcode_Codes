class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto i : nums){
            pq.push(i);
        }
        int n=nums.size()-k;
        while(n--){
            pq.pop();
            }
        return pq.top();
    }
};