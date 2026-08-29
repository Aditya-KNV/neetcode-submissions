class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int left = 0; int right = n - 1;
        if(s.size() == 1 || s.size() == 0) return true;
        while(left <= right) {
            while(!isalnum(s[left])) left++;
            while(!isalnum(s[right])) right--;
            if(left > right) break;
            if(isalpha(s[left])) s[left] = tolower(s[left]);
            if(isalpha(s[right])) s[right] = tolower(s[right]);
            if(s[left] != s[right]) return false;
            left++; right--;
        }
        return true;
    }
};
