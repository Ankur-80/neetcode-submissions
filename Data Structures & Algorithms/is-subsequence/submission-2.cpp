class Solution {
public:
    bool receursion(string s, string t, int i, int j) {
        if(i == s.size()) return true;
        if(j == t.size()) return false;

        if(s[i] == t[j]) {
            return receursion(s, t, i+1, j+1);
        }
        return receursion(s, t, i, j+1);
    }

    bool isSubsequence(string s, string t) {
        return receursion(s, t, 0, 0);
    }
};