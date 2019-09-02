// Reversal algorithm for array rotation
// Write a function rotate(arr[], d, n) that rotates arr[] of size n by d elements.
// https://www.geeksforgeeks.org/program-for-array-rotation-continued-reversal-algorithm/

// rotate(arr[], d, n)
//   reverse(arr[], 1, d) ;
//   reverse(arr[], d + 1, n);
//   reverse(arr[], 1, n);

#include <iostream>
#include <string>
using namespace std;

// Function to print array
void printArray(int arr[], int n)
{
  for(int i=0; i<n; i++)
    cout << arr[i] << " ";
}

// Function to reverse the array
void reverse(int arr[], int a, int b){
  int cnt = (b-a)/2;
  for(int i=0; i<cnt; i++){
    int temp = arr[a+i];
    arr[a+i] = arr[b-i-1];
    arr[b-i-1] = temp;
  }
}

//Function to rotate the array
void rotate(int arr[], int d, int n){
  reverse(arr, 0, d);
  printArray(arr, n); cout << "\n";
  reverse(arr, d, n);
  printArray(arr, n); cout << "\n";
  reverse(arr, 0, n);

}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function calling
    rotate(arr, 4, n);
    printArray(arr, n);
    return 0;
}
