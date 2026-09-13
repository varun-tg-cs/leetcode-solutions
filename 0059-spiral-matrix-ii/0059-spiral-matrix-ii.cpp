class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int topRow = 0, bottomRow = n - 1, leftColumn = 0, rightColumn = n - 1;
        vector<vector<int>> matrix(n, vector<int>(n, -1));
        int total = n * n;
        int c = 1;
        while (c != total+1) {
            for (int i = leftColumn; i <= rightColumn; i++) {
                matrix[topRow][i] = c;
                c++;
            }
            topRow++;
            for(int i=topRow;i<=bottomRow;i++){
                matrix[i][rightColumn]=c;
                c++;
            }
            rightColumn--;
            for(int i=rightColumn;i>=leftColumn;i--){
                matrix[bottomRow][i]=c;
                c++;
            }
            bottomRow--;
            for(int i=bottomRow;i>=topRow;i--){
                matrix[i][leftColumn]=c;
                c++;
            }
            leftColumn++;
        }
        return matrix;
    }
};