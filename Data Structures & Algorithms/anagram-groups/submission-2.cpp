class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // unordered_map<string, vector<string>> mp;
        // for(string str : strs) {
        //     string bef = str;
        //     sort(str.begin(), str.end());
        //     mp[str].push_back(bef); 
        // }
        // vector<vector<string>> ans;
        // for(const auto& [key, value] : mp) {
        //     ans.push_back(value);
        // }
        // return ans;
        unordered_map<string, vector<string>> mp;
        for(string str : strs) {
            vector<int> count(26, 0);
            for(char c : str) {
                count[c - 'a']++;
            }
            string key = to_string(count[0]);
            for(int i = 1; i < 26; i++) {
                key += ',' + to_string(count[i]);
            }
            mp[key].push_back(str);
        }
        vector<vector<string>> ans;
        for(const auto&[key, value] : mp) {
            ans.push_back(value);
        }
        return ans;
    }
};
