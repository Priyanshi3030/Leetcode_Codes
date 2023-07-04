class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    //create set to store row and column whose element is 0
    int n=matrix.size(),m=matrix[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
               for(int k = 0 ; k < n ; k++){
                        if(matrix[k][j] != 0){
                            matrix[k][j] = INT_MIN+2;
                        }
                    }

                for(int k = 0 ; k < m ; k++){
                        if(matrix[i][k] != 0){
                            matrix[i][k] = INT_MIN+2;
                        }
                    }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==INT_MIN+2){
                matrix[i][j]=0;
            }
        }
    }
    }
};