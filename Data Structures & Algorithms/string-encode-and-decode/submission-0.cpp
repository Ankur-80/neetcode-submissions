class Solution {
public:

    string encode(vector<string>& strs) {
        string ret;
        for(auto &s: strs) {
            ret += to_string(s.length());
            ret += '#';
            ret += s;
        }
        return ret;
    }

    vector<string> decode(string s) {
        vector<string> ret;
        int i = 0, j = 0;
        while(j < s.size()) {
            j = i;
            while(s[j] != '#') {
                j++;
            }
            int length = stoi(s.substr(i, j-i));
            i = j+1;
            j = i + length;
            string s1 = s.substr(i,length);
            ret.push_back(s1);
            i = j;            
        }
        return ret;
    }
};
