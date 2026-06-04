class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size=mat.size();
        int sum=0;
        for(int i=0;i<size;i++) {
            sum=sum+mat[i][i];
            sum=sum+mat[i][size-1-i];
        }
        if(size%2==1) {
            sum=sum-mat[size/2][size/2];
        }
        return sum;
    }
};
