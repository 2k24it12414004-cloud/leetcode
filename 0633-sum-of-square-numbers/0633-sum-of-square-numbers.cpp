class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i=0;
        long long j=sqrt(c);
        while(i<=j){
    //  long long ans=(i+j)*(i+j)-2*i*j;
  //  long long ans = i * i + j * j;
long long ans = (i+j)*(i+j)-2*i*j;

            if(ans==c){
                return true;
            }
            else if(ans>c)
            j--;
            else
            i++;
        }
        return false;
    }
};