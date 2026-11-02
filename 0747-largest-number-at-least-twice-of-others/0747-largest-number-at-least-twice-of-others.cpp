class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int flag;
        for (int i = 0; i < n; i++) {
            if (maxi < nums[i]) {
                maxi = nums[i];
                flag = i;
            }
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] != maxi) {
                if (nums[i] * 2 > maxi) {
                    return -1;
                }
            }
        }
        return flag;
    }
};