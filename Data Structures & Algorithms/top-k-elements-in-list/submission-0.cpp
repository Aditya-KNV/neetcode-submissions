class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       map<int, int, greater<int>> mp;
       for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
       }
       vector<pair<int, int>> temp;
       for(const auto & [key, value] : mp) {
            temp.push_back({value, key});
       }
       sort(temp.begin(), temp.end(), greater<pair<int, int>>());
       vector<int> ans;
       for(int i = 0; i < k; i++) {
            ans.push_back(temp[i].second);
       }
       return ans;
    }
};
