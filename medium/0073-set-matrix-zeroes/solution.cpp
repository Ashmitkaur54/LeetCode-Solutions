class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0=1;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0]==0){
                col0=0;
            }
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int k=matrix.size()-1;k>=0;k--){
            for(int l=matrix[0].size()-1;l>=1;l--){
                if(matrix[0][l]==0 || matrix[k][0]==0){
                    matrix[k][l]=0;
                }
            }
            if(col0==0){
                matrix[k][0]=0;
            }
        }
    }
};