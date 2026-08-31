class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        map<char, int> lastDigit;
        int maxi = 0;
        for(int r = 0; r < s.size(); r++) {
            if(lastDigit.count(s[r]) && lastDigit[s[r]] >= l) {
                l = lastDigit[s[r]] + 1;
            }
            lastDigit[s[r]] = r;
            maxi = max(maxi, r - l + 1);
        }
        return maxi;
    }
};
