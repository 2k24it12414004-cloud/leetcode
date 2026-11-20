class Solution {
public:
    int minimizeSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int n=nums.size();
    //   //  int low=nums[0]-nums[1];
    //     //int high=nums[0]-nums[n-1];
    //     if(n<3)
    //     return 0;
        int a=nums[n-1]-nums[2];
        int b=nums[n-3]-nums[0];
        int c=nums[n-2]-nums[1];
        return min({a,b,c});
    }
};