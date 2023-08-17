class Solution {
public:
   vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>>ans(mat.size(),vector<int>(mat[0].size()));
        vector<vector<bool>>visited(mat.size(),vector<bool>(mat[0].size(),false));
        queue<pair<pair<int,int>,int>>q; //{{i,j},distance}
        for(int i=0; i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    visited[i][j]=true;
                }
            }
        }
        while(!q.empty()){
            int a = q.front().first.first;
            int b = q.front().first.second;
            int dis = q.front().second;
            q.pop();
            ans[a][b]=dis;
            if(a!=0 && !visited[a-1][b]){
                visited[a-1][b]=true;
                q.push({{a-1,b},dis+1});
            }
            if(a!=mat.size()-1 && !visited[a+1][b]){
                visited[a+1][b]=true;
                q.push({{a+1,b},dis+1});
            }
            if(b!=0 && !visited[a][b-1]){
                visited[a][b-1]=true;
                q.push({{a,b-1},dis+1});
            }
            if(b!=mat[0].size()-1 && !visited[a][b+1]){
                visited[a][b+1]=true;
                q.push({{a,b+1},dis+1});
            }
        }
        return ans;
    }
};