#include <iostream>

using namespace std;

int gcd(int a , int b)
{
 if( b==0)
   return a;
 else 
 return gcd(b, a%b);
}
void leftRotate( int arr[], int d, int n)
{
 d=d%n;
int gcdee = gcd(d,n);
for ( int i=0; i<gcdee;i ++)
 {
   int temp = arr[i];
   int j=i;
   while (1)
{
 int k =j+d;
  if (k >=n)
   k =k-n;
  if (k==i)
   break;

 arr[j] =arr[k];
 j=k;
}

arr[j] = temp;
}
}
void printarray( int arr[], int k)
{
 for ( int i =0;i<k;i++)
   cout<<arr[i]<<" ";
}
int main()
{
 int n , d;
 cin>>n;
 int arr[100];
 cin>>d;
 for(int i=0;i<n;i++)
 cin>>arr[i];
 leftRotate(arr, d, n);
 printarray(arr,n);
 return 0;
}