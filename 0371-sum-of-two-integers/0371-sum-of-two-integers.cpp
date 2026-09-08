class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            //jab carry not equal to 0 na ho jo
            //update b ma hoga
            int carry=a&b;//carry1
            a=a^b;//without carry add
            b=carry<<1;//update carry
        }
        return a;
    }
};