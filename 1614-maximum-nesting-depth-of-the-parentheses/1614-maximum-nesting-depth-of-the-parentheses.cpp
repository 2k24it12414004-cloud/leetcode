class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int maxbrac=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            {
                st.push('(');
                count++;
            }
            if(s[i]==')'){
              //  count=st.size();
                maxbrac=max(maxbrac,count);
                st.pop();
                count--;
            }
            
        }
        return maxbrac;
    }
};