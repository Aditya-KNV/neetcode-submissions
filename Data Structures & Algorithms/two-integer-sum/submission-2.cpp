class Solution {
public:
    

    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            mp[nums[i]] = i;
        }
        for(int i = 0; i < n; i++) {
           int k = target - nums[i];
           if(mp.count(k) && mp[k] != i) return {i, mp[k]};
        }
    }
};
