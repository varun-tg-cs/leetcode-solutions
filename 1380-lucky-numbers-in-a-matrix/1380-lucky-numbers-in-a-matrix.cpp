class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans;
        for (int i = 0; i < m; i++) {
            int rowMin = matrix[i][0];
            int col = 0;
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] < rowMin) {
                    rowMin = matrix[i][j];
                    col = j;
                }
            }
            bool flag = true;
            for (int k = 0; k < m; k++) {
                if (matrix[k][col] > rowMin) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                ans.push_back(rowMin);
            }
        }
        return ans;
    }
};