class Solution {
public:
    string digitSum(string s, int k) {
    //    while(s.size()>k){
    //    string newa;
    //    for(int i=0;i<s.size();i++){
    //     int curr=0;
    //     for(int j=0;j<i+k&&j<s.size();j++){
    //         curr=curr+(s[j]-'0');
    //         i=i+k-1;
    //         newa=newa+to_string(curr);
    //     }
    //     s=newa;
    //    }
    //    } 
    //    return s;
    // int n=s.size();
    while(s.size()>k){
        int n=s.size();
        string hoja;
        for(int i=0;i<n;i=i+k){
           int sum=0;
           int end=min(i+k,n);
           for(int j=i;j<end;j++){
            sum=sum+s[j]-'0';
           }
           hoja=hoja+to_string(sum);
        }
        s=hoja;
    }
    return s;
    }
};