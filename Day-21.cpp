/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
       vector<int> size = binaryMatrix.dimensions(); 
       int n = size[0];
        int m = size[1]; 
        int i=0, j = m-1;
        while(i<n && j>=0){
            if(binaryMatrix.get(i,j) == 1) j--;
            else i++;
            
        }
        if(j==m-1 && i == n) return -1;
        else return j+1;
    }
};
