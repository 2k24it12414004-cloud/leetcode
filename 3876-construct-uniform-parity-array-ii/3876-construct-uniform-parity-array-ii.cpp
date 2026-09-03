class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini=INT_MAX;
        int temp=0;
     for(int i=0;i<nums1.size();i++){
         if(nums1[i]%2!=0){
         mini=min(mini,nums1[i]);
         temp++;}
     }
        if(temp==0)
        return true;
    for(int i=0;i<nums1.size();i++){
        if(nums1[i]%2==0&&nums1[i]<=mini)
        return false;
    } 
        
        return true;
    }
};