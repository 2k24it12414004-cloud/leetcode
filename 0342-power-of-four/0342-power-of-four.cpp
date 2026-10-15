class Solution {
public:
    bool isPowerOfFour(int n) {
        int i=0;
        while(true){
     long long power=pow(4,i);
     if(n==power)
     return true;
     if(n<power)
     break;
     i++;
        }
        return false;
    }
};