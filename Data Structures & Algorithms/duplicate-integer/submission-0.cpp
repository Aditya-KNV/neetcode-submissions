class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int numsSize = nums.size();
        for(int i = 1; i < numsSize; i++) {
            if(nums[i-1] == nums[i]) return true;
        }
        return false;
    }
};