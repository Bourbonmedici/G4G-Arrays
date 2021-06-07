/*
Quickly find multiple left rotations of an array
Space Optimized solution
*/

#include <iostream>
using namespace std;

void leftrotate(int ar[] , int n, int k)
{
     for (int i =k; i <k+n ;i++)
     cout<<ar[i%n]<<" ";
}

int main()
{
    int n, k;
    cout<<"Enter the size of the array :";
    cin>>n;
    int *ar = (int *)calloc(n, sizeof(*ar));
    cout<<"Enter elements";
    for (int i =0; i <n ; i++)
    cin>>ar[i];
    cout<<"Enter the degree of rotation !";
    cin>>k;
    leftrotate(ar, n, k);
    free (ar);
    ar = NULL;

}