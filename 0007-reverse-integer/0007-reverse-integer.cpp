class Solution {
public:
    int reverse(int x) {
        int temp=x;
        int b;
        long long s=0;
        int flag;
        while(x!=0){
        b=x%10;
        s=s*10+b;
        x=x/10;
            
        }
     if(s>pow(-2,31)&&s<pow(2,31)-1)
         flag=s;
    else
         flag=0;
    
    
    return flag;}
};