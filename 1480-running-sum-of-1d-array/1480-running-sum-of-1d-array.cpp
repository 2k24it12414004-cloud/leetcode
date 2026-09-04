class Solution {
public:
//prefix sum concept add prevous sum same array ma and add
//i=1 to n for loop only changes
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]=nums[i]+nums[i-1];
        }
        return nums;
    }
};