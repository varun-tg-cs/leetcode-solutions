class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int i = 0;
        int t = 0;

        while(tickets[k] > 0) {
            if(tickets[i] > 0) {
                tickets[i]--;
                t++;
            }

            i = (i + 1) % n;
        }

        return t;
    }
};