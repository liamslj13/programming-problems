class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> sHash;
        unordered_map<char, int> tHash;

        if (s.size() != t.size()) return false;

        for (int i = 0; i < s.size(); i++) {
            if (sHash.find(s[i]) != sHash.end()) {
                sHash[s[i]]++;
            } else {
                sHash[s[i]] = 1;
            }

            if (tHash.find(t[i]) != tHash.end()) {
                tHash[t[i]]++;
            } else {
                tHash[t[i]] = 1;
            }
        }

        return tHash == sHash;
    }
};
