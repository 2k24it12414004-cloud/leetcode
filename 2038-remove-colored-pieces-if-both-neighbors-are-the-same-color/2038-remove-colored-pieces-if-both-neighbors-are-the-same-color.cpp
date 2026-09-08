class Solution {
public:
    bool winnerOfGame(string colors) {
        int n=colors.size();
        bool flag=false;
        int c1=0;
        int c2=0;
        if(colors.size()<3){
            return false;
        }
        for(int i=1;i<colors.size()-1;i++){
            // if(i>0&&i<n-1){
                if(colors[i]=='A'){
                    if(colors[i-1]=='A'&&colors[i+1]=='A'){
                        // colors[i]=='G';
                        //  flag=true;
                         c1++;
                    }
                    
                }
                else if(colors[i]=='B'){
                    if(colors[i-1]=='B'&&colors[i+1]=='B'){
                        // colors[i]=='G';
                        //  flag=false; no need
                         c2++;
                    }
                // }
            }
        }
        
        if(c1!=0&&c1>c2)//do not understand proper
        return true;
        else
        return false;
    }
};