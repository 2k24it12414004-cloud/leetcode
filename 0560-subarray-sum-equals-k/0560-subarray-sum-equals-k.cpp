class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>pre(n,0);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }
        map<int,int>mp;
        //elemet an for frequency
        int count=0;
        for(int i=0;i<n;i++){
            if(pre[i]==k)
            count++;
            int rem=pre[i]-k;
            if(mp.find(rem)!=mp.end()){
                count=count+mp[rem];}
                //add frequency of remaining 0, so increase acoording to frequency
                mp[pre[i]]++;
                //increase the frequency har bar increases karna hai

            

        }
return count;
    }
};