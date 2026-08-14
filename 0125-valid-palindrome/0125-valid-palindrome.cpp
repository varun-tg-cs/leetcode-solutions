class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                v.push_back(tolower(s[i]));
            }
        }
        int n = v.size();
        for (int i = 0; i < n; i++) {
            if (v[i] != v[n - i - 1]) {
                return false;
            }
        }
        return true;
    }
};