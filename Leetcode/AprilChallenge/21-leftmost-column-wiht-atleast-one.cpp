//Day 20 of Leetcode 30 days challenge, by Kartik Mohan
//Leftmost Column with at Least a One
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
        vector<int> dim=binaryMatrix.dimensions();
        int n=dim[0], m=dim[1];
        int i=0,j=m-1,col=-1;
        while(j>=0 && i<n)
        {
            int x=binaryMatrix.get(i,j);
            if(x)
            {
                col=j;
                j--;
            }
            else i++;
        }
        return col;
    }
};
