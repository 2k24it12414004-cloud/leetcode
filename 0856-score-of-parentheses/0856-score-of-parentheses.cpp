class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0;
        int n = s.length();
        //vector<int> vec
        stack<int>vec;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                //vec.push_back(score);
                vec.push(score);
                score = 0;
            } else {
                if (i > 0 && s[i - 1] == '(')
                    score = vec.top() + 1;
                else
                    score = vec.top() + 2 * score;
                                vec.pop();

            }
        }
        return score;
    }
};