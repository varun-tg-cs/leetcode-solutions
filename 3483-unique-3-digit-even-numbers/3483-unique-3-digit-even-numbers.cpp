class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int c = 0;
        unordered_map<int,int>mpp;
        for (int i = 0; i < digits.size(); i++) {
            for (int j = 0; j < digits.size(); j++) {
                for (int k = 0; k < digits.size(); k++) {
                    if (digits[i] != 0) {
                        if ((i != j) &&
                            (j != k) &&
                            (i != k)) {
                            int num = digits[i]*100+digits[j]*10+digits[k];
                            if (digits[k] % 2 == 0) {
                                if(mpp[num]!=1){
                                    c++;
                                    mpp[num]=1;
                                }
                            }
                        }
                    }
                }
            }
        }
        return c;
    }
};