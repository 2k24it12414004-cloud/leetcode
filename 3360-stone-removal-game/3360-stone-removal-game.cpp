class Solution {
public:
    bool canAliceWin(int n) {
        int flag=1;
        int k=10;
        if(n<10)
        return false;
        while(n>=0){
            n=n-k;
            if(flag==0)
            flag=1;
            else
            flag=0;
            k--;
            
        }
        if(flag==1)return true;
        else
        return false;
    }
};