// Search an element in a sorted and rotated array
// https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/

#include <iostream>
#include <string>
using namespace std;

int indx = -1;


void searchSorted(int arr[], int srch, int strt, int end, int n){
    if (strt == end){
      if (arr[strt] == srch){
        indx = strt;
        return;
      }
      else {
        indx = -1;
        return;
      }
    }
    int mid = (strt+end)/2;
    if (arr[mid] == srch){
      indx = mid;
      return;
    }
    if(arr[mid+1] == srch){
      indx = mid+1;
      return;
    }
    if(arr[mid] > arr[mid+1] and arr[0] <= srch)
      searchSorted(arr, srch, 0, mid, n);
    else if(arr[mid] > arr[mid+1] and arr[0] >= srch)
      searchSorted(arr, srch, mid, n-1, n);
    else if(arr[mid] < arr[mid+1] and arr[0] <= srch)
      searchSorted(arr, srch, 0, mid, n);
    else if(arr[mid] < arr[mid+1] and arr[0] >= srch)
        searchSorted(arr, srch, mid, n-1, n);

}



// Driver Program
int main(){

  int arr[] = { 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 1, 2, 3, 4 };
  int n = sizeof(arr) / sizeof(arr[0]);
  int srch = 11;
  searchSorted(arr, srch, 0, n-1, n);

  if (indx == -1)
    cout << "Element not found" << "\n";
  else
    cout << "Element " << srch << " found at index: " << indx << "\n" ;

  return 0;
}
