class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int> mp;

        int n = deck.size();
        if (n < 2) return false;

        // Count element frequency
        for (auto it : deck) {
            mp[it]++;
        }

        vector<int> freq;

        for (auto it : mp) {
            freq.push_back(it.second);
        }

        // Calculate GCD of all frequencies
        int g = freq[0];

        for (int i = 1; i < freq.size(); i++) {
            g = gcd(g, freq[i]);
        }

        return g >= 2;
    }
};