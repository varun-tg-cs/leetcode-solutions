class Solution {
public:
    int fib(int n) {
        vector<int> fb = {0, 1, 1};
        if (n == 0)
            return 0;
        if (n == 1 || n == 2)
            return 1;
        int first = 1, c = 3;
        int second = 1;

        do {
            int third = first + second;
            fb.push_back(third);
            first = second;
            second = third;
            c++;
        } while (c <= n);

        return fb[n];
    }
};