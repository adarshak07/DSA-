class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
//the approach is to first find zeros then store the location of that zero in 2 diff array one each for row and column . after that again travere the matrix and if that row[i] or col[j] == 1 , make that matrix element to 0 , simple logic feel easy .
        int N = matrix.size();
        int M = matrix[0].size();

        vector<int> row(N,0);
        vector<int> col(M,0);

        for(int i=0;i<N;i++) {
            for(int j=0;j<M;j++) {
                if(matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        for(int i=0;i<N;i++) {
            for(int j=0;j<M;j++) {
                if(row[i] == 1 || col[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }

    }
};
