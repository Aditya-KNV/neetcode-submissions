class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty()) return "";
        unordered_map<char, int> freqT, window;
        for(int i = 0; i < t.size(); i++) {
            freqT[t[i]]++;
        }
        int have = 0; int need = freqT.size();
        pair<int, int> res = {-1, -1}; int l = 0;
        int resLen = INT_MAX;
        for(int r = 0; r < s.size(); r++) {
            char c = s[r];
            window[c]++;
            if(freqT.count(c) && freqT[c] == window[c]) {
                have++;
            }
            while(have == need) {
                if((r - l + 1) < resLen) {
                    resLen = r - l + 1;
                    res = {l, r};
                }
                window[s[l]]--;
                if(freqT.count(s[l]) && window[s[l]] < freqT[s[l]]) {
                    have--;
                }
                l++;
            }
        }
        if(res.first == -1) return "";
        return s.substr(res.first, resLen);
    }
};
