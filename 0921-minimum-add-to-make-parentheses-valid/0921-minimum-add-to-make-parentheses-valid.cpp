class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
       // int close=0;
        stack<int>st;
        //maine stack bana 
        for(int i=0;i<s.size();i++){
            //for loop chal
            if(s[i]=='('){
            count++;
            //all opening bracket ka count rakha then push kiya
            st.push(s[i]);
            }
            else if(s[i]==')')
            {
                //jab closing bracket mila tab count kam kar diya and
                //pop bhi kar diya
            if(st.size()>0&&st.top()=='('){
                st.pop();
                count--;
            }
            // chalega example like closing bracket ()) op 1 so
           else
           count++;
            }
        }
     //   if()
        return count;
    }
};