class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        vector<vector<string>> ret;
        for(int idx = 0; idx < strs.size(); idx++) {
            vector<int> count (26,0);
            for(int ch = 0; ch < strs[idx].length(); ch++) {
                count[strs[idx][ch] - 'a']++;
            }
            string s1 = to_string(count[0]);
            for(int idx = 1; idx < 26; idx++) {
                s1 += ',' + to_string(count[idx]);
            }
            mpp[s1].push_back(strs[idx]);
        }

        for(auto& itr: mpp) {
            ret.push_back(itr.second);
        }

        return ret;
    }
};
