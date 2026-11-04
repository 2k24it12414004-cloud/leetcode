class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        vector<int> temp;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U')
                temp.push_back(s[i]);
        }
        reverse(temp.begin(), temp.end());
        int id = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
              s[i]=temp[id];
              id++;

            }
        }
        return s;
    }
};
