class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows=mat.size();
        int columns=mat[0].size();

        if(rows*columns!=r*c) {
            return mat;
        }
        vector<vector<int>> result(r,vector<int>(c));
        int row=0,col=0;

        for(int i=0;i<rows;i++) {
            for(int j=0;j<columns;j++) {
                result[row][col]=mat[i][j];
                col++;

                if(col==c) {
                    col=0;
                    row++;
                }
            }
        }
        return result;
    }
};
