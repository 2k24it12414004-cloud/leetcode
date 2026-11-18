class Solution {
public:
    int minChanges(string s) {
        int n=s.length();
        int count=0;
        for(int i=1;i<n;i=i+2){
            // if(i>0&&s[i]==s[i-1]){
            
            // }
         if(i>0&&s[i]!=s[i-1]){
           // i++;
                count++;
                
            }
        // if(s[i]=='0'&&s[i-1]=='1'){

        // }
        }
        return count;
    }
};