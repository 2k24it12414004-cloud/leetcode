class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int n=nums.size();
        int sum=0;
        int maxlen=INT_MAX;
        while(j<n){
       sum=sum+nums[j];
          while(sum>=target){
            int len=j-i+1;
            maxlen=min(maxlen,len);
            sum=sum-nums[i];
            i++;
            //puran sum ki value remove kiya idx aage bada
          }
          j++;
        }
        if(maxlen==INT_MAX)
        //10 times 1 ho target 11 so case edge
        return 0;
        return maxlen;
    }
};