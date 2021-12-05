#include <iostream>
using namespace std;
void printarray(double const * , int);
int main()
{
double num[10] = {5.3,10.5,15.23,20.2,25.3,30.6,35.2,40.7,45.8,50.3};

printarray(num,10);

}

void printarray(double const *ptr , int)
{
for(int i = 0;i<10;i++)

cout << *(ptr + i) << "\t";

cout << endl;
}
 