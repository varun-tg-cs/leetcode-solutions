class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int topRow = 0, bottomRow = m - 1, leftColumn = 0, rightColumn = n - 1;
        vector<int> spiral;
        while(topRow<=bottomRow && leftColumn<=rightColumn){
            for(int i=leftColumn;i<=rightColumn;i++){
                spiral.push_back(matrix[topRow][i]);
            }
            topRow++;
            for(int i=topRow;i<=bottomRow;i++){
                spiral.push_back(matrix[i][rightColumn]);
            }
            rightColumn--;
            if(topRow<=bottomRow){
                //traverse bottom row
                for(int i=rightColumn;i>=leftColumn;i--){
                    spiral.push_back(matrix[bottomRow][i]);
                }
                bottomRow--;
            }
            if(leftColumn<=rightColumn){
                //traverse left column
                for(int i=bottomRow;i>=topRow;i--){
                    spiral.push_back(matrix[i][leftColumn]);
                }
                leftColumn++;
            }
        }
        return spiral;
    }
};