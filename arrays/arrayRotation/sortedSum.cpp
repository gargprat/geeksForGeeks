// Given a sorted and rotated array, find if there is a pair with a given sum
// https://www.geeksforgeeks.org/given-a-sorted-and-rotated-array-find-if-there-is-a-pair-with-a-given-sum/

#include <iostream>
#include <string>
using namespace std;


bool findPairSum(int arr[], int sum, int n){
  int i;
  for(i=0; i<n; i++)
    if(arr[i] > arr[i+1])
      break;
  // i has the pivot element
  int l = (i+1)%n;  // index of smallest element
  int r = i;        // index of largest element

  while(l != r){
    if(arr[l] + arr[r] == sum)
      return true;
    if(arr[l] + arr[r] < sum)
      l = (l+1)%n;
    else
      r = (n+ r -1)%n;
  }
  return false;
}

// Driver Program
int main(){
      int arr[] = {11, 15, 6, 8, 9, 10};
      int sum = 100;
      int n = sizeof(arr)/sizeof(arr[0]);

      if(findPairSum(arr, sum, n))
          cout << "Array has elements that sum upto : " << sum << "\n";
      else
          cout << "Array does not have elements that sum upto : " << sum << "\n";

      return 0;

}
