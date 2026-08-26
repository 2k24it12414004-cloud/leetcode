class Solution {
public:
//tuf two function floor ceil for lower bound ad upperbound improves needs ai re do it
int ceilo(vector<int>nums,int target){
    int low=0;
    int high=nums.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            ans=mid;
            high=mid-1;

        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else
        low=mid+1;
    }
return ans;
}
int flooro(vector<int>nums,int target){
    int low=0;
    int high=nums.size()-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
       
        if(nums[mid]==target){
        ans=mid;
        low=mid+1;}
        else if(nums[mid]<target){//high side wallah dega
        //ans=mid;
       // high=mid-1;
low=mid+1;
        }
        else
     //   low=mid+1;
  high=mid-1;
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int c=ceilo(nums,target);
        int f=flooro(nums,target);
return {c,f};
    }
};