class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int n=matrix.length;
        int row=0;
        int col=matrix[0].length-1;
        int i=-1;
        while(row<n && col>=0){
            if(matrix[row][col]<target){
                row++;
            }
            else if(matrix[row][col]>target){
                col--;
            }
            else{
                return true;
            }
        }
       return false;
    }
}
