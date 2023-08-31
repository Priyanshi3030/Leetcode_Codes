class Solution {
public:
int fn(vector<vector<int>> grid,int i,int j,vector<vector<int>> &dp){
    //base case
    if(i==0 && j==0 )return 1;
    if(i<0 || j< 0 || grid[i][j]==1)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int left=fn(grid,i,j-1,dp);
    int up=fn(grid,i-1,j,dp);
    return dp[i][j]=left+up;
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        if(n==1 && m==1 && obstacleGrid[0][0]==0)return 1;
        if(n==1 && m==1 && obstacleGrid[0][0]==1)return 0;
        if(obstacleGrid[0][0]==1)return 0;
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return fn(obstacleGrid,obstacleGrid.size()-1,obstacleGrid[0].size()-1,dp);
        
    }
};