class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            int num = s[i]-'a';
            sum = sum + ((26-num)*(i+1));
        }
        return sum;
    }
};