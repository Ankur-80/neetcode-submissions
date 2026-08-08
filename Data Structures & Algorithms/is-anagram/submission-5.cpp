class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> mpp;
        if(t.length() != s.length()) {
            return false;
        }
        for(int idx = 0; idx <= s.length(); idx++) {
            mpp[s[idx]]++;
            mpp[t[idx]]--;
        }
        for(const auto &itr: mpp) {
            if(itr.second) {
                return false;
            }
        }
        return true;
    }
};
