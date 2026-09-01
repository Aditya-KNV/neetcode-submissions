class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(); int n = matrix[0].size();
        // first find row
        int row = 0;
        int l = 0; int r = m - 1;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(target >= matrix[mid][0] && target <= matrix[mid][n-1]) {
                row = mid;
                break;
            }
            else if(target > matrix[mid][n-1]) l = mid + 1;
            else r = mid -1;
        }
        l = 0; r = n-1;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(target == matrix[row][mid]) return true;
            else if(target < matrix[row][mid]) r = mid - 1;
            else l = mid + 1;
        }
        return false;
    }
};
