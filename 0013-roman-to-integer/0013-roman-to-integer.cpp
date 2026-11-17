class Solution {
public:
    int value(char c){
        switch(c){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
    // If a smaller value appears before a larger value, subtract it. Otherwise, add it
    int romanToInt(string s) {
        int total=0;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(i+1<n && value(s[i])<value(s[i+1])){
                total-=value(s[i]);
            }
            else{
                total+=value(s[i]);
            }
        }
        return total;
    }
};