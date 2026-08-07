class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        vector<string>tmep_1  = strs;
        vector<vector<string>> ret;
        for(int i = 0; i < strs.size(); i++) {
            sort(tmep_1[i].begin(), tmep_1[i].end());
            mpp[tmep_1[i]].push_back(strs[i]);
        }
        for(auto const& [key, val] : mpp) {
            ret.push_back(val);
        }
        return ret;
    }
};
