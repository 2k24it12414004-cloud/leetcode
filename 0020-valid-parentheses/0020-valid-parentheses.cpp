class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
             else if (st.size() == 0)
                return false;
            else if (st.size() > 0) {
                if (s[i] == ')' && st.top() == '(' ||
                    s[i] == '}' && st.top() == '{' ||
                    s[i] == ']' && st.top() == '[') {
                    st.pop();
                }
                else
                return false;
            }
        }
                // } else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
                //   //  if (st.size() == 0)
                //         st.push(s[i]);
                //     // return false;
                // }
                // else{
                //     return false;
                // }
            
            if (st.size() == 0)
                return true;
            return false;
        }
    };