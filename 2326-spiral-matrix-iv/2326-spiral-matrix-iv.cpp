/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> matrix(m, vector<int>(n, -1));
        int topRow = 0, bottomRow = m - 1, leftColumn = 0, rightColumn = n - 1;
        while (head) {
            //fill top row
            for (int i = leftColumn; i <= rightColumn && head; i++) {
                matrix[topRow][i] = head->val;
                head = head->next;
            }
            topRow++;
            //fill rightmost column
            for (int i = topRow; i <= bottomRow && head; i++) {
                matrix[i][rightColumn] = head->val;
                head = head->next;
            }
            rightColumn--;
            //fill bottommost row
            for (int i = rightColumn; i >= leftColumn && head; i--) {
                matrix[bottomRow][i] = head->val;
                head = head->next;
            }
            bottomRow--;
            //fillleft most column
            for (int i = bottomRow; i >= topRow && head; i--) {
                matrix[i][leftColumn] = head->val;
                head = head->next;
            }
            leftColumn++;
        }
        return matrix;
    }
};