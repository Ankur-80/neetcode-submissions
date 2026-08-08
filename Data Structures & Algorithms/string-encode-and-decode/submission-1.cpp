class Solution {
public:

    string encode(vector<string>& strs) {
        string s1;
        for(int i = 0; i < strs.size(); i++) {
            s1 += to_string(strs[i].length());
            s1 += "#";
            s1 += strs[i];
        }
        return s1;
    }

    vector<string> decode(string s) {
        vector<string> ret;
        for(int i = 0; i < s.length();) {
            int j = i;
            while(s[j] != '#') {
                j++;
            }
            int length = stoi(s.substr(i,j-i));
            i = j+1;
            j = i+length;
            string s1 = s.substr(i, length);
            ret.push_back(s1);
            i = j;
        }
        return ret;
    }
};
