class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        // approach ak
        typedef pair<int, int> pi;
        // element and indices
        int n = score.size();
        priority_queue<pi> pq;
        for (int i = 0; i < n; i++) {
            pq.push({score[i], i});
        }
        int count = 1;
        vector<string> ans(n);
        while (pq.size() > 0) {

            int ele = pq.top().first;
            int idx = pq.top().second;
            pq.pop();
            if (count == 1) {
                ans[idx] = "Gold Medal";
            } else if (count == 2)
                ans[idx] = "Silver Medal";
            else if (count == 3)
                ans[idx] = "Bronze Medal";
            else {
                string store = to_string(count);
                ans[idx] = store;
            }
            count++;
        }
        return ans;
    }
};