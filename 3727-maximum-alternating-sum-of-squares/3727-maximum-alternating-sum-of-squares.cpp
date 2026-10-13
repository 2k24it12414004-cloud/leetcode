class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //  if(i%2!=0){
        //    int odd=nums[i]; 
        //  }
        //  if(i%2==0){
        //     int even=nums[i];
        //  }
        // }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                nums[i]=nums[i]*-1;
            }
        }
        sort(nums.begin(),nums.end());

        int n=nums.size();
        long long sum=0;
        if(n%2==0){  
            int max=n/2;
            int k=n-1;
            int genius=0;
            while(max--){
             sum=sum+nums[k]*nums[k];
             k--;
             sum=sum-nums[genius]*nums[genius];
             genius++;
            }

        }
        else{
            int max=(n+1)/2;
           // for(int i=n-1;i>=)
           int k=n-1;
           int min=n-max;
           while(max--){
           sum=sum+nums[k]*nums[k];
           k--;
           }
           
           int genius=0;
           while(min--){
           sum=sum-nums[genius]*nums[genius];
           genius++;
           }
        }
        return sum;
    }
};