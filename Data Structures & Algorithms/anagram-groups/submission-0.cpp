class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        map<string, vector<string>> mp;
        vector<string> dupe = strs;
        for(int i = 0; i < n; i++) {
            sort(strs[i].begin(), strs[i].end());
        }
        for(int i = 0; i < n; i++) {
            mp[strs[i]].push_back(dupe[i]);
        }
        vector<vector<string>> ans;
        for(const auto& [key, value] : mp) {
            ans.push_back(value);
        }
        return ans;
    }
};
