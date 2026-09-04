class Solution {
public:
    //optimise
    
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int mini=INT_MAX;
        vector<int>minFromIndex(n);
        for(int i=n-1;i>=0;i--){
            mini=min(mini,nums[i]);
            minFromIndex[i]=mini;
        }
      //  return minEle[0];//store minimum element 
        int maxEl=INT_MIN;
        for(int i=0;i<n;i++){
            maxEl=max(maxEl,nums[i]);
            if(maxEl-minFromIndex[i]<=k)
            return i;
        }
        return -1;
    }
};