class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<vector<int>> store;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1)sum++;
            }
            store.push_back({sum,i});
        }
        vector<int> ans;
        sort(store.begin(),store.end());
        for(int i=0;i<k;i++){
        ans.push_back(store[i][1]);
        }
        return ans;
    }
};