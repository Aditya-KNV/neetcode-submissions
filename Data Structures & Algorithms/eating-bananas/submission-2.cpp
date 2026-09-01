class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans = 0; 
        int left = 1; int right = *max_element(piles.begin(), piles.end());
        while(left <= right) {
            int dup = 0;
            int mid = left + (right - left) / 2;
            for(int i = 0; i < piles.size(); i++) {
               dup += ceil((double)piles[i] / mid);
            }
            if(dup <= h) {
                ans = mid;
                right = mid - 1;
            }
            else left = mid + 1;
        }
        return ans;
    }
};
