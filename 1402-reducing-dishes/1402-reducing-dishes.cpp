class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        //sort then pivot suffix sum
        sort(satisfaction.begin(),satisfaction.end());
        //suffix sum
        int n=satisfaction.size();
        vector<int>suf(n);
        suf[n-1]=satisfaction[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+satisfaction[i];
        }
   //calculate positive jaya se sstart ho vo pivot element
   //from suffix sum
   int id=-1;
   for(int i=0;i<n;i++){
    if(suf[i]>0){
    id=i;
    break;}
   }
   if(id==-1)return 0;
   int p=1;
   int sum=0;
   for(int i=id;i<n;i++){
   sum=sum+satisfaction[i]*p;
   p++;
   }
return sum;
    }
};