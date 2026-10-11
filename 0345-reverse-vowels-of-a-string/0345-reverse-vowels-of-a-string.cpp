class Solution {
public:
    string reverseVowels(string s) {
        // [ 'e', 'e', 'o', 'e' ] 
        list<char> l;
        for (int i = 0; i < s.size(); i++) {
            if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' ||
                tolower(s[i]) == 'i' || tolower(s[i]) == 'o' ||
                tolower(s[i]) == 'u'){
                    l.push_front(s[i]);
                }
        }
        for(int i=0;i<s.size();i++){
            if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' ||
                tolower(s[i]) == 'i' || tolower(s[i]) == 'o' ||
                tolower(s[i]) == 'u'){
                    s[i]=l.front();
                   l.pop_front();
                }
        }
        return s;
    }
};