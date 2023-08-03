class Solution {
    private:
    void bfs(int sr, int sc,vector<vector<int>>& ans, int color,int initial,
    vector<vector<int>> & visited, vector<int> first,vector<int>second){
        int n=ans.size(),m=ans[0].size();
        queue<pair<int,int>>q;
        q.push({sr,sc});
        visited[sr][sc]=1;
        ans[sr][sc]=color;
        while(!q.empty()){
        auto value=q.front();
        int row=value.first;
        int col=value.second;
        q.pop();
        for(int i=0;i<4;i++){
          int r=row+first[i];
          int c=col+second[i];
          if(r>=0 && r<n && c>=0 && c<m && !visited[r][c] && ans[r][c]==initial){
              q.push({r,c});
              visited[r][c]=1;
              ans[r][c]=color;
          }  
        }
        
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        int ini=image[sr][sc];
        vector<vector<int>> ans=image;
        vector<int> first={-1,0,1,0};
        vector<int>second={0,1,0,-1};
        bfs(sr,sc,ans,color,ini,visited,first,second);
        return ans;
    }
};