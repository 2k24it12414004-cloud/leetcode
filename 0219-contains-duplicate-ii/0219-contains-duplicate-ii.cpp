class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // typedef pair<int, int> pi;
        map<int, int> st;
        int n = nums.size();
        // for (int i = 0; i < n; i++) {
        //     st.push({i, nums[i]});
        // }
        //    for(auto it:st){
        //     int idx=it.first;
        //     int ele=it.second;
        //     if()
        //    }
        for (int i = 0; i < n; i++) {
            if (st.find(nums[i]) != st.end()) {
                int ele = nums[i];
                int second = st[nums[i]];
                if (i - second <= k) {
                    return true;
                }
            }

            st[nums[i]] = i;
        }
        return false;
    }
};