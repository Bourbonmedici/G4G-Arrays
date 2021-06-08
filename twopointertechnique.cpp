/*
To find a pair of elements if added gives provided sum value
Achieved using 2 pointer technique
Time Complexity : O(n), in naive approach O(n^2)
*/
#include <iostream>
using namespace std;
int twopointer( int A[], int N, int X)
{
    int i=0;
    int j = N-1;

    while( i< j)
    {
        if(A[i] +A[j]== X)
        return 1;

        else if(A[i]+A[j]<X)
        i++;

        else 
        j--;
    }
    return 0;
}
int main()
{
    int k, n;
    cout<<"Enter size of array !";
    cin>>n;
    int *ar = (int *) calloc ( n , sizeof(*ar));
    cout<<"Enter elements";
    for ( int i =0; i < n; i++)
    cin>> ar[i];
    cout<<"Enter the summation value !";
    cin>>k;
    if( (bool) twopointer(ar, n, k))
    cout<<"The pair exists";
    else
    cout<<"The pair doesn't exist";
}