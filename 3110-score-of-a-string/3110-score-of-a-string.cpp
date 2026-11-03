class Solution {
public:
    int scoreOfString(string s) {
        int n = s.size();
        int score = 0;
        for(int i=1;i<=n-1;i++){
            score = score + abs(s[i]-s[i-1]);
        }
        return score;
    }
};