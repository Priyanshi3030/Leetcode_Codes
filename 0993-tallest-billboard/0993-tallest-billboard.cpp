class Solution {
public:

   

   int helper(vector<int> &rods, int balance,int i,vector<vector<int>> &dp)
    {
        if(i>=rods.size() && balance==0)
            return 0;
        if(i>=rods.size() && balance!=0)
            return INT_MIN;

        if(dp[i][balance+5000]!=-1)
            return dp[i][balance+5000];
        int left= helper(rods,balance+rods[i],i+1,dp);
        int right= helper(rods,balance-rods[i],i+1,dp);
        int ans= rods[i]+max(left,right);
        int skip= helper(rods,balance,i+1,dp);

        ans= max(ans,skip);
        dp[i][balance+5000]=ans;
        return ans;

    }

    int tallestBillboard(vector<int>& rods) {
        
        vector<vector<int>> dp(rods.size(),vector<int>(10001,-1));
        int ans= helper(rods,0,0,dp);

        if(ans<=0)
            return 0;
        else
            return ans/2;
    }

};