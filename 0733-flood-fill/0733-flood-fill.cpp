class Solution {
public:

void dfs(vector<vector<int>>& image,vector<vector<int>>& ans,int sr,int sc,
int initial ,int color,vector<int> first,vector<int> second){
    int n=image.size();
    int m=image[0].size();
  ans[sr][sc]=color;
  for(int i=0;i<4;i++){
      int row=sr+first[i];
      int col=sc+second[i];
      if(row>=0 && row<n && col>=0 && col<m && ans[row][col]==initial && ans[row][col]!=color){
          dfs(image,ans,row,col,initial,color,first,second);
      }
  }

}



    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans=image;
        vector<int> first={-1,0,1,0};
        vector<int> second={0,1,0,-1};
        int initial=image[sr][sc];
        dfs(image,ans,sr,sc,initial,color,first,second);
        return ans;
    }
};