class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int maxlen = 0;
        unordered_map<char, int> mpp;
        for(int j = 0; j < s.length();) {
            if(mpp.find(s[j]) != mpp.end()) {
                i = max(mpp[s[j]] + 1,i);
            }
            mpp[s[j]] = j;
            maxlen = max(maxlen, j-i+1);
            j++;
        }
        return maxlen;
    }
};
