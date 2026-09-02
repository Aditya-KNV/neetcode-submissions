class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        vector<int> freq1(26);
        vector<int> freq2(26);
        for(int i = 0; i < s1.size(); i++) {
            freq1[s1[i] - 'a']++;
        }
        for(int i = 0; i < s1.size(); i++) {
            freq2[s2[i] - 'a']++;
        }
        int l = 0; int r = s1.size() - 1;
        while(r < s2.size()) {
            if(freq1 == freq2) return true;
            freq2[s2[l] - 'a']--;
            l++; r++;
            if(r < s2.size()) {
                freq2[s2[r] - 'a']++;
            }
        }
        return false;
    }
};
