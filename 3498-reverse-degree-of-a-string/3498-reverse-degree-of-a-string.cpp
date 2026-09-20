class Solution {
public:
//by me
    int reverseDegree(string s) {
    //    int a='z';
    //    return a;
    int ans=0;
    for(int i=0;i<s.size();i++){
       ans=ans+(123-s[i])*(i+1);
    } 
    return ans;
    }
};