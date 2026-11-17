class Solution {
public:
    int alternateDigitSum(int n) {
       int sum=0;
       bool flag=true;
       int digit=0;
       //even par sign oppsite hota hai 
        while(n!=0){
            int a=n%10;
         //  sum=sum+-1*a;
         if(flag==true){
           sum=sum+a;
            flag=false;
         }
         else{
            sum=sum-a;
            flag=true;
         }
         digit++;
            n=n/10;
        }
        if(digit%2==0)
        return -1*sum;
    //     else
    // return sum;
    return sum;
    //leftmost ulta karna hai
    }
};