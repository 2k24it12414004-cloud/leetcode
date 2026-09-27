class Solution {
public:
//me practice
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int s1=source[0];
        int s2=source[1];
        int t1=target[0];
        int t2=target[1];
        if(s1==t1&&s2==t2){
            //when queen already at target
            return 0;
        }
        //agar ek value equal ho toh dusra move hoga one
        if(s1==t1||s2==t2)
        return 1;
        //abs(s1-t1) and s2-t2 diagonal moves once
        if(abs(s1-t1)==abs(s2-t2))
        return 1;
        //otherwise dono value ko move karo
        else
        return 2;
    }
};