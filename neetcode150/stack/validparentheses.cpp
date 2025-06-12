class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 != 0) {
            return false;
        }

        unordered_map<char, char> brackets = {
            {')', '('},
            {'}', '{'},
            {']', '['},
        };
        vector<char> stack;

        for (auto c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stack.push_back(c);
            } else if (!stack.empty() && stack.back() == brackets[c]) {
                stack.pop_back();
            } else {
                return false;
            }
        }

        if (stack.empty()) {
            return true;
        }

        return false;
    }
};
