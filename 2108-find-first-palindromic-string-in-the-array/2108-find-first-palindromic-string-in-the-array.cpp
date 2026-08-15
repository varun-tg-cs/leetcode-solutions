class Solution {
public:
    bool isPallindrome(string word) {
        int n = word.size();
        for (int j = 0; j < n / 2; j++) {
            if (word[j] != word[n - j - 1]) {
                return false;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for (int i = 0; i < n; i++) {
            if (isPallindrome(words[i])) {
                return words[i];
            }
        }
        return "";
    }
};