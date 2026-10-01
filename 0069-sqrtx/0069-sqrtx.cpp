class Solution {
public:
    int mySqrt(int x) {
        long long p;
        long long ans;
        if(x==0)
        return 0;
        if(x==2)
        return 1;
        for(long long i=1;i<x;i++){
            p=i*i;
            if(p==x){
            ans=i;
            break;
            }
            else if(p>x)
            return i-1;
        }
        return ans;
    }
};