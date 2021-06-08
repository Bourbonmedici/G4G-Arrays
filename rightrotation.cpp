/*
Reversal algorithm for right rotation of elements 
*/

#include <iostream>
using namespace std;

void reversearray(int ar[], int start, int end)
{
    while(start < end)
    {
        swap(ar[start], ar[end]);
        start++;
        end--;
    }
}
void rightrotate(int ar[] , int n, int k)
{
     reversearray(ar, 0, n-1);
     reversearray(ar, 0, k-1);
     reversearray(ar, k, n-1);
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
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
    rightrotate(ar, n, k);
    printArray(ar, n);
    free (ar);
    ar = NULL;

}