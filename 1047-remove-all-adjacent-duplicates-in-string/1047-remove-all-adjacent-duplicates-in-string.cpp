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
        //string ch = "";
        string ch;
        //o(n^2) time complexity is when used ch=ch+st.top()
        while (st.size() > 0) {
         //   ch = ch + st.top();
           ch.push_back(st.top());
            st.pop();
        }
        reverse(ch.begin(),ch.end());
        return ch;
    }
};