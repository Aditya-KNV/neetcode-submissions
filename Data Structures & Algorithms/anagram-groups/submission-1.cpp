class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string str : strs) {
            string bef = str;
            sort(str.begin(), str.end());
            mp[str].push_back(bef); 
        }
        vector<vector<string>> ans;
        for(const auto& [key, value] : mp) {
            ans.push_back(value);
        }
        return ans;
    }
};
