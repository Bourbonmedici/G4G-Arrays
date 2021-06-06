/*
We can use two pointers, say i and j which point to first and last element of array respectively. 
As we know in cyclic rotation we will bring last element to first and shift rest in forward direction, 
so start swaping arr[i] and arr[j] and keep j fixed and i moving towards j.  Repeat till i is not equal to j.
*/
#include <iostream>
using namespace std;
void printarray( int arr[], int s);
void rotate (int ar[], int n)
{
     int i =0, j=n-1;
     while(i!=j)
     {swap(ar[i], ar[j]);
     printarray( ar,n);
     cout<<"\n";
     i++; }
}
void printarray( int arr[], int s)
{ 
   for ( int i=0 ; i< s; i++)
      cout<< arr[i] << " ";
}

int main()
{
   int n , d;
cout<< "Enter the size !";
   cin >> n;
   int *arr= (int *)calloc( n, sizeof(*arr));
cout << "Enter the elements !";
   for ( int i =0; i < n; i++)
    cin >> arr[i];
   rotate(arr, n);
printarray( arr,n);

free (arr);
arr = NULL;
}