class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        int mid=nums[n/2];
        int count=0;
        cout<<mid;
        ///agar count 1 means true else false
        for(int i=0;i<n;i++){
            if(nums[i]==mid)
            count++;
        }
if(count==1)
return true;
return false;
    }

};