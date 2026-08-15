#include <bits/stdc++.h>
class Solution {
public:
    int calPoints(vector<string>& operations) {
        int total = 0;
        vector<int> sum;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+")
                sum.push_back(sum[sum.size() - 1] + sum[sum.size() - 2]);
            else if (operations[i] == "D")
                sum.push_back(sum.back() * 2);
            else if (operations[i] == "C")
                sum.pop_back();
            else
                sum.push_back(stoi(operations[i]));
        }
        for (int i = 0; i < sum.size(); i++) {
            total += sum[i];
        }
        return total;
    }
};