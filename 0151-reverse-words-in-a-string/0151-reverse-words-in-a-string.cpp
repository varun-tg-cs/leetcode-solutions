class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int back, front = 0;

        for (int i = 0; i < s.size(); i++) {

            if ((s[i] == ' ' && i > 0 && s[i - 1] != ' ') ||
                (i == s.size() - 1 && s[i] != ' ')) {

                if (s[i] == ' ')
                    back = i - 1;
                else
                    back = i;

                words.push_back(s.substr(front, back - front + 1));
                front = i + 1;
            }

            if (i > 0 && s[i] != ' ' && s[i - 1] == ' ') {
                front = i;
            }
        }

        string ans = "";

        for (int i = words.size() - 1; i >= 0; i--) {
            if (ans != "")
                ans += " ";

            ans += words[i];
        }

        return ans;
    }
};