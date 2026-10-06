class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
        int close=0;
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
            count++;
            st.push(s[i]);
            }
            else if(s[i]==')')
            {
            if(st.size()>0&&st.top()=='('){
                st.pop();
                count--;
            }
           else
           count++;
            }
        }
     //   if()
        return abs(count-close);
    }
};