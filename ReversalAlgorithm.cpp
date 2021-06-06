/* Method : reversal algorithm 
Let AB are the two parts of the input array where A = arr[0..d-1] and B = arr[d..n-1]. The idea of the algorithm is : 
 

    Reverse A to get ArB, where Ar is reverse of A.
    Reverse B to get ArBr, where Br is reverse of B.
    Reverse all to get (ArBr) r = BA. 
*/


#include <iostream>

using namespace std;


void Reversearray ( int arr[], int start , int end )
{
  while (start < end )
{
      int temp = arr[start];
      arr[start] = arr [end] ;
      arr [end] = temp;
      start++;
      end--;
}
}

void leftRotate ( int arr[], int d, int n)
{
 
 if (d==0)
return;

d=d%n;

Reversearray( arr , 0 , d-1 );
Reversearray( arr, d , n-1);
Reversearray ( arr, 0, n-1 );

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
cout <<" Enter the rotation degree !";
  cin >>d ;
   int *arr= (int *)calloc( n, sizeof(*arr));
cout << "Enter the elements !";
   for ( int i =0; i < n; i++)
    cin >> arr[i];
   leftRotate ( arr, d, n);
printarray( arr,n);

free (arr);
arr = NULL;
}