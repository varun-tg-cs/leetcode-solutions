class Solution {
public:
    int lengthOfLastWord(string s) {
        int c = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                c++;
            }

            if (c > 0 && (i == 0 || s[i - 1] == ' ')) {
                break;
            }
        }

        return c;
    }
};