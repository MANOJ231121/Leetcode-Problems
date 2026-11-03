class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0;
        int right = matrix.size() * matrix[0].size() - 1;
        int mid;
        while (left <= right) {
            mid = left + (right - left) / 2;
            int row = mid / matrix[0].size();
            int col = mid % matrix[0].size();
            if (matrix[row][col] == target) {
                return true;
            } else if (matrix[row][col]> target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return false;
        // this is the code for O(n*logm)
        //         for(int i =0;i<matrix.size();i++){
        //             int left =0;
        //             int right = matrix[i].size()-1;
        //             int mid ;
        //             while(left < right){
        //                 mid = left +(right-left)/2;
        //                 if(matrix[i][mid] == target ){
        //                     return true;
        //                     return 0;
        //                 }
        //                 else if(matrix[i][mid]>target){
        //                     right = mid -1;
        //                 }
        //                 else{
        //                     left = mid+1;
        //                 }
        //             }
        //         }
        // return false;
    }
};