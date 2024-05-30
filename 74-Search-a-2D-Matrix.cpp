class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int rows= matrix.size();
       int cols = matrix[0].size();
       int col= cols - 1 , row=0 ;
        // 3 4
       cout<<cols;
        while(row < rows && col > -1){
             int cur = matrix[row][col];
              if (cur == target)  return true;
              if(target > cur) row++;
              else col--;
        }

        
       

        return false;
    }
};