//Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
// https://www.geeksforgeeks.org/array-rotation/
//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;


/*Function to left Rotate arr[] of
  size n by 1*/
void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];

    arr[i] = temp;
}

/*Function to right Rotate arr[] of
  size n by 1*/
void rightRotatebyOne(int arr[], int n)
{
    int temp = arr[n-1], i;
    for (i = n-1; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[i] = temp;
}

/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
        leftRotatebyOne(arr, n);
}

/*Function to right rotate arr[] of size n by d*/
void rightRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
        rightRotatebyOne(arr, n);
}

/* utility function to print an array */
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

/* Driver program to test above functions */
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function calling
    leftRotate(arr, 4, n);
    rightRotate(arr, 4, n);
    printArray(arr, n);

    return 0;
}
