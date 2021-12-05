#include <iostream>
using namespace std;

// recursive binary search returns the location of x in the given array [1,2,3...]
//otherwise is returns -1
int BinarySearch(int arr[],int l,int r,int x)
  {

    if (r >= l) {
      
    int mid = (l + r) / 2;
  // checks if element is at the middle returns the middle index

    if (arr[mid] == x)
      return mid;
    
    //if smaller than mid then checks the left of the array
    
    if (arr[mid] > x)
        return BinarySearch(arr,l, mid -1, x);
    //otherwise it must be on the right side
    else if (arr[mid] < x)
        return BinarySearch(arr, mid + 1,r, x);


  }
// is reached when element is not found in array
return -1;

}
int main() 
{
int arr[]={2,3,4,40,50};
int x = 40;
 int n = sizeof(arr) / sizeof(arr[0]);
n = 5;

int result = BinarySearch(arr,0, n-1, x);
if (result == -1)
{
    cout << "Element is not present in array";
}    
 else 
  {
    cout << "Element is present at index " << result;
  }
    return 0;
}  