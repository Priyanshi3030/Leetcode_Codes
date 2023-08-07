class Solution {
public:
int climb(int i,vector<int>&dp,int n){
    if(i>n)return 0;
    if(i==n)return 1;
    if(dp[i]!=-1)return dp[i];
    return dp[i]=climb(i+1,dp,n) + climb(i+2,dp,n);

}
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        int ans=climb(0,dp,n);
        return ans;
    }
};