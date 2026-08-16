class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int t = 0, curr = 0;
        for (int i = 0; i <= requests.size() - 1; i++) {
            while (requests[i] != curr) {
                if (requests[i] > curr) {
                    curr += 1;
                } else {
                    curr -= 1;
                }
                t += 1;
            }
        }
        return t;
    }
};