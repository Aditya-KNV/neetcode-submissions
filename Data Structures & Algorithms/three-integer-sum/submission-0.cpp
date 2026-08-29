class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        map<int, int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            mp[nums[i]] = i;
        }
        set<vector<int>> set;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                int compliment = -(nums[i] + nums[j]);
                if(mp.count(compliment) && mp[compliment] != i && mp[compliment] != j) {
                    vector<int> temp = {nums[i], nums[j], compliment};
                    sort(temp.begin(), temp.end());
                    set.insert(temp);
                }
            }
        }
        for (auto x : set) {
            ans.push_back(x);
        }
        return ans;
    }
};
