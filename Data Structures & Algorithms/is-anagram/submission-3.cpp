class Solution {
public:
    bool isAnagram(string s, string t) {
        std::map <char, int> countS;
        std::map <char, int> countT;

        if(t.length() != s.length())
        {
            return false;
        }
        for(int i = 0; i < s.length(); i++) {
            countS[s[i]] += 1;
            countT[t[i]] += 1;
        }
        if(countS != countT)  {
                return false;
            }
        return true;
    }
};
