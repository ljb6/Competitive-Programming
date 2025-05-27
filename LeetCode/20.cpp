class Solution {
public:
    bool isValid(string s) {
        map<char, char> ref = {{')', '('}, {'}', '{'}, {']', '['}};
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
            else {
                if (st.empty()) return false;
                else if (st.top() == ref[s[i]]) st.pop();
                else return false;
            }
        }

        if (st.empty()) return true;
        return false;
    }
};