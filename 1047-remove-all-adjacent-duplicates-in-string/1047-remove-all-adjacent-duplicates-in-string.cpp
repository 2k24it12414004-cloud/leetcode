class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (st.size() == 0)
                st.push(s[i]);
            else if (s[i] == st.top()) {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        string ch = "";
        while (st.size() > 0) {
            ch = ch + st.top();
            st.pop();
        }
        reverse(ch.begin(),ch.end());
        return ch;
    }
};