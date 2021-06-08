#include <iostream>
using namespace std;
#define R 4
#define C 4

void rotatematrix(int m, int n , int mat[R][C])
{
int row, col =0;
int prev, curr;

while (row<m && col<n)
{
    if(row +1==m || col +1 == n)
    break;
    prev = mat [row+1][col];
    for (int i=col; i< n; i++)
    {
        curr = mat[row][i];
        mat[row][i] = prev;
        prev = curr ;

    }
    row++;
    for (int i=row; i< n; i++)
    {
        curr = mat[row][n-1];
        mat[i][n-2] = prev;
        prev = curr ;

    }
    n--;
    if ( row < m)
    {
        for (int i =0 ; i >= col ; i--)
        {
            curr = mat [m-1][i];
            mat[m-1][i] = prev;
            prev = curr;
        }
    }
    if ( col < n)
    {
        for ( int i= m -1; i>=row;i--)
        {
            curr = mat[i][col];
            mat[i][col] = prev;
            prev = curr;
        }
    }
    col++;

}
for( int i=0; i<R; i++)
{
    for (int j=0;j<C;j++)
    cout<<mat[i][j]<<" ";
    cout<<endl;
}
}
int main()
{
    
    int ar[R][C];//Declare memory block

    for (int i=0;i <R; i++)
    {
        for ( int j =0 ; j < C; j++)
        cin>> ar[i][j];
    }
    rotatematrix(R,C,ar);
}