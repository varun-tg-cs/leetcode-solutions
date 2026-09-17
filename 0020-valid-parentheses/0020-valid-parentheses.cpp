class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if(c=='('||c=='['||c=='{'){
                st.push(c);
            }
            if(c==')'&& st.empty()!=true){
                if(st.top()!='('){
                    return false;
                }else{
                    st.pop();
                }
            }else if(c==')'&& st.empty()==true){
                return false;
            }
            if(c==']'&& st.empty()!=true){
                if(st.top()!='['){
                    return false;
                }else{
                    st.pop();
                }
            }else if(c==']'&& st.empty()==true){
                return false;
            }
            if(c=='}'&& st.empty()!=true){
                if(st.top()!='{'){
                    return false;
                }else{
                    st.pop();
                }
            }else if(c=='}'&& st.empty()==true){
                return false;
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};