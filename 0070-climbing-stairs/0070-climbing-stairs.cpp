class Solution {
public:

    int climbStairs(int n) {
        long long prev=1;
        long long prev1=1;
        for(int i=2;i<=n+1;i++){
            long long curr=prev+prev1;
            prev=prev1;
            prev1=curr;
        }
        
        return prev;
    }
};