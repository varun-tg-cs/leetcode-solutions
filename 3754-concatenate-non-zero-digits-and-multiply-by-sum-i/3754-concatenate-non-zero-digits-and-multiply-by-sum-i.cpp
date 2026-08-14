#include <bits/stdc++.h>
class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        int number = 0;
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {
                number = number * 10 + (s[i] - '0');
                sum += s[i] - '0';
            }
        }
        return number * sum;
    }
};