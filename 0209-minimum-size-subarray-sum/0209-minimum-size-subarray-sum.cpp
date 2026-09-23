class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int n=nums.size();
        int sum=0;
        int len;
        int minlen=INT_MAX;
        //find minimum length subarray jinka sum == target
        while(j<n){
      sum=sum+nums[j];
      while(sum>=target){
        //jab tak big hai sum not if important
        len=j-i+1;
        minlen=min(minlen,len);
        //remove element from sum i ko bhi remove kiya
        sum=sum-nums[i];
        //next element
        i++;
      }
     j++;
        }
        if(minlen==INT_MAX)
        return 0;
        return minlen;
    }
};