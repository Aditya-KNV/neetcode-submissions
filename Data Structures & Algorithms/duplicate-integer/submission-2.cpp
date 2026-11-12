class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // map<int, int> mp;
        // for(auto i : nums) {
        //     mp[i]++;
        //     if(mp[i] > 1) return true;
        // }
        // return false;
        unordered_set<int> seen;
        for(auto i : nums) {
            if(seen.count(i)) return true;
            seen.insert(i);
        }
        return false;
    }
};