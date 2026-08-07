class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpp;
        if(s.length() != t.length()) {
            return false;
        }

        for(int idx= 0; idx < s.length(); idx++) {
            mpp[s[idx]]++;
            mpp[t[idx]]--;
        }

        for(int idx = 0; idx < mpp.size(); idx++) {
            if(mpp[s[idx]] != 0) {
                return false;
            }
        }
        return true;
    }
};
