class Solution {
public:
    string largestGoodInteger(string num) {
        vector<int> goodNum;
        string str = "";
        bool special = false;
        for (int i = 1; i < num.size() - 1; i++) {
            if (num[i - 1] == num[i] && num[i] == num[i + 1]) {
                if (num[i] == '0')
                    special = true;
            }
            if (num[i - 1] == num[i] && num[i] == num[i + 1]) {
                str = string(3, num[i]);
                goodNum.push_back(stoi(str));
            }
            str = "";
        }
        if (special && *max_element(goodNum.begin(), goodNum.end()) == 0)
            return "000";
        if (goodNum.size() != 0) {
            int mx = *max_element(goodNum.begin(), goodNum.end());
            return to_string(mx);
        }

        return "";
    }
};