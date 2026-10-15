class Solution {
public:
//tc=o(n^2)
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            set<int> s;
            for (int j = i; j < n; j++) {

                s.insert(nums[j]);
                // s.inse

                int d = s.size();
                count = count + d * d;
             //   s.clear();
                // it delete all elements
                // to refreash
            }
        }
        return count;
    }
};