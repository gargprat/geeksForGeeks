// Program to cyclically rotate an array by one
// Given an array, cyclically rotate the array clockwise by one.

// https://www.geeksforgeeks.org/c-program-cyclically-rotate-array-one/

#include <iostream>
#include <string>
using namespace std;

// Function to rotate Array
void rotate(int arr[], int n){
  int tmp = arr[n-1];
  for(int i=n-1; i>0; i--)
    arr[i] = arr[i-1];
  arr[0] = tmp;
}

// Function to print array
void printArray(int arr[], int n)
{
  for(int i=0; i<n; i++)
    cout << arr[i] << " ";
}

int main(){

  int arr[] = { 1, 2, 3, 4, 5, 6, 7};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Current Array is: ";
  for(int i=0; i<n; i++)
    cout << arr[i] << " ";

  rotate(arr, n);

  cout << "\nRotated array is: ";
  for(int i=0; i<n; i++)
    cout << arr[i] << " ";
}
