// Block swap algorithm for array rotation
// Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.
// https://www.geeksforgeeks.org/block-swap-algorithm-for-array-rotation/

#include <iostream>
#include <string>
using namespace std;

// Function to swap d elements starting at fi with elements starting at si
void swap(int arr[], int fi, int si, int d){

  int i, temp;
  for(i =0; i< d; i++){
    temp = arr[fi+i];
    arr[fi+i] = arr[si+i];
    arr[si+i] = temp;
  }
}

// Function to rotate array
void leftRotate(int arr[], int d, int n){

  if (d==0 || d==n)
    return;

  if (d == n-d){
    swap(arr, 0, n-d, d);

    return;
  }
  if (d < n-d ){
    swap(arr, 0, n-d, d);
    leftRotate(arr, d, n-d);

  }
  else {
    swap(arr, 0, d, n-d);
    leftRotate(arr+n-d, 2*d-n, d);
  }

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


  // Function calling
  leftRotate(arr, 4, n);
  printArray(arr, n);

  return 0;
}
