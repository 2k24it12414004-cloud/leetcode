class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
       unordered_map<string, string> mp;
        for (auto ele : knowledge) {
            mp[ele[0]] = ele[1];
        }
        string result = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                i++;
                string p = "";
                while (i < s.size() && s[i] != ')') {
                    p += s[i];
                    i++;
                }
                if (mp.find(p) != mp.end()) {
                    result += mp[p];
                }
                if (mp.find(p) == mp.end()) {
                    result += '?';
                }
            } else if (s[i] == ')')
                continue;
            else {
                result += s[i];
            }
        }
        return result; 
    }
};