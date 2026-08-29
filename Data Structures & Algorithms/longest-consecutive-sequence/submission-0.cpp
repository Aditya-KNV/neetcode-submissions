class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(), nums.end());
        int longest = 0;
        for(int n : nums) {
            if(!set.contains(n-1)) {
                int curr = n;
                int length = 1;
                while(set.contains(++curr)) {
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
