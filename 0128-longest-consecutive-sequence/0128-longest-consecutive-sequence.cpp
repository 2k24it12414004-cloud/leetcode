class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
      //  int len=nums[0];
        int n=nums.size();
        int maxi=0;
        if(n==0)
        return 0;
        if(n==1)
        return 1;
        int flag=0;
        int magic=0;
        for(int i=1;i<nums.size();i++){
           if(i>0&&nums[i]==nums[i-1]){
            // flag++;
            magic=1;
           continue;
           
           }
        //     if(nums[i]!=nums[i-1])
        //    magic=1;
            else if(i>0&&nums[i]==nums[i-1]+1){
                count++;
               // len++;
             //  magic=1;
              maxi=max(maxi,count);
               
            }
            else{
             // magic=1;
                count=1;
                maxi=max(maxi,count);
            }
        }
        if(magic==1&&maxi==0)
         return 1;
        return maxi;
       // return -1;
    }
};