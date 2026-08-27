class Solution {
public:
    int findInVec(vector<int>& mp, int k) {
        for(int i = 0; i < mp.size(); i++) {
            if(mp[i] == k) return i;
        }
        return -1;
    }

    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> mp;
        for(int i = 0; i < n; i++) {
            int ind = findInVec(mp, nums[i]);
            if(ind != -1) return {ind, i};
            int k = target - nums[i];
            mp.push_back(k);
        }
    }
};
