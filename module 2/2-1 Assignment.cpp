#include <iostream>
using namespace std;
int main()
{
double num[10] = {5.3,10.3,15.4,20.5,25.3,30.6,35.2,40.5,45.7,50.2};

double *ptr;
ptr=num;
for(int i = 0;i<10;i++){

cout << *(ptr + i) << "\t";

  }
cout << endl;
}
