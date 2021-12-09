#include <iostream>
using namespace std;

class Course
{
private: 
    int  CID;
    string CNAME;
    int Ccredit;
public:

Course()  


}:

int BinarySearch(int arr[],int l,int r,int x)
  {

    if (r >= l) {
      
    int mid = (l + r) / 2;

    if (arr[mid] == x)
      return mid;
    
   
    
    if (arr[mid] > x)
        return BinarySearch(arr,l, mid -1, x);
    
    else if (arr[mid] < x)
        return BinarySearch(arr, mid + 1,r, x);


  }

return -1;

