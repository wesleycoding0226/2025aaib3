//week09-4.cpp
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
        int M = matrix.size(), N = matrix[0].size();
        int top = 0, bottom = M-1, left=0, right=N-1;
        while (top<=bottom && left <= right){
            for(int i=left; i<=right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;
            if(top >¡@bottom) break;

            for(int i=top; i<=bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(left > right) break;

            for(int j=right; j>=left; j--) {
                ans.push_back(matrix[bottom][j]);
            }
            bottom--;
            if(top > bottom) break;

            for(int i=bottom; i>=top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
            if(left > right) break;
        }
        return ans;
    }
};
