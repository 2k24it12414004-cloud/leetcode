class Solution {
public:
//rg
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        //suffix sum
        int n=satisfaction.size();
        vector<int>suffix(n);
        suffix[n-1]=satisfaction[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]+satisfaction[i];
        }
//pivot index jaha se positive milana start hua vaha se loop n tak
int id=-1;
for(int i=0;i<n;i++){
    if(suffix[i]>0){
        id=i;
        break;
    }

}
if(id==-1)
return 0;
//varna loop idx to n
int x=1;
int maxsum=0;
for(int i=id;i<n;i++){
        maxsum=maxsum+satisfaction[i]*x;
    x++;
}
return maxsum;
    }
};