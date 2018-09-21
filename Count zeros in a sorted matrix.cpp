/*Given a N x N binary matrix A where each row and column of the matrix is sorted in ascending order , Your task is to complete the function  countZero which returns the count of  number of 0s present in it.
Note : Elements in matrix can be either 1 or 0
Input:
The first line of input will be the no of test cases then T test cases will follow . The second line of each test case contains two space separated integers M,N denoting the size of the 2 d matrix . Then in the next lines are the space separated values of the matrix A[ ] [ ] . 
Output:
The output will be the number of zeroes present in the square matrix.
Constraints:
1<=T<=50
1<=M,N<=50
0<=A[][]<=1
Example:
Input
1
3
0 0 0 0 0 1 0 1 1
Output
6
*/


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*you are required to complete this method*/
int countZeroes(int A[MAX][MAX],int N)
{
int count=0;
    for(int i=0;i<N;i++)
     {
       for(int j=0;j<N;j++)
         {
            if(A[i][j]==0)
             count++;
         }
     }
  return count;
}

