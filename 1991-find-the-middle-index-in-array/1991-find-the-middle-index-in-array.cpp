class Solution {
public:
//by me prefix sum bekar apparoach soch prefix sum 
//and suffix sum calculate karo then check by traversal of 
//both array when equal return i
    int findMiddleIndex(vector<int>& nums) {
         int n=nums.size();
        vector<int>pre(n);
        vector<int>suf(n);
      pre[0]=nums[0];
        for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+nums[i];
        }
        suf[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+nums[i];
        }
       // return suf[n-2];
       int i=0,j=0;
       int n1=pre.size();
       int n2=suf.size();
       while(i<n1&&j<n2){
        if(pre[i]==suf[j])
        return i;
        i++;
        j++;
       }
       return -1;
    }
};