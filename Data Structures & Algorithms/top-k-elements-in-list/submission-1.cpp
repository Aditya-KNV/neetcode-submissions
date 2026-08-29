class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       map<int, int> mp;
       for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
       }
       vector<vector<int>> freq(nums.size() + 1);
        for(const auto& [key, value] : mp) {
            freq[value].push_back(key);
        }
        vector<int> ans;
        for(int i = freq.size() - 1; i > 0; i--) {
            for(int n : freq[i]) {
                ans.push_back(n);
                if(ans.size() == k) return ans;
            }
        }
        return ans;
    }
};
 