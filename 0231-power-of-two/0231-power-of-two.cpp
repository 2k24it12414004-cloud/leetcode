class Solution {
public:
    bool isPowerOfTwo(int x) {
      //  return x>0&&!(x&(x-1));
      if(x>0){
        if((x&(x-1))==0)
        {
            //having at least one bit in 2 power zero 
            return true;
        }
      }
      return false;
    }
};