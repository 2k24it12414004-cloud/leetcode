class Solution1 {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int sum = nums[i] + nums[j];
                if (sum < target) {
                    count++;
                }
            }
        }
        return count;
    }
};
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
int i=0;
int j=nums.size()-1;
int count=0;
sort(nums.begin(),nums.end());
    while (i < j) {
        int sum = nums[i] + nums[j];

        if (sum <target) {
            count += (j - i);
            //dry run it i=0 j=3 and sum<target means three pairs mila hai
            i++;
        } else {
            j--;
        }
    }

return count;

            }
};