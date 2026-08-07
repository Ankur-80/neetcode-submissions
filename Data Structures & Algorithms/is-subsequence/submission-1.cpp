class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        for(j = 0; t[j] != '\0';) {
            if(s[i] == t[j]) {
                j++;
                i++;
            } else {
                j++;
            }
        }
        if(i == s.length()) {
            return true;
        }
        else {
            return false;
        }
    }
};