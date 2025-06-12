class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res = {};
        map<vector<int>, vector<string>> hash;
        unordered_map<char, int> charToIndex = {
            {'a', 0}, {'b', 1}, {'c', 2}, {'d', 3},
            {'e', 4}, {'f', 5}, {'g', 6}, {'h', 7},
            {'i', 8}, {'j', 9}, {'k', 10}, {'l', 11},
            {'m', 12}, {'n', 13}, {'o', 14}, {'p', 15},
            {'q', 16}, {'r', 17}, {'s', 18}, {'t', 19},
            {'u', 20}, {'v', 21}, {'w', 22}, {'x', 23},
            {'y', 24}, {'z', 25},
        };

        for (auto str : strs) {
            vector<int> temp(26, 0);
            for (auto c : str) {
                temp[charToIndex[c]]++;
            }

            if (hash.find(temp) != hash.end()) {
                hash[temp].push_back(str);
            } else {
                hash[temp] = {str};
            }
        }

        // append all results to res vector
        for (const auto& pair : hash) {
            res.push_back(pair.second);
        }

        return res;
    }
};
