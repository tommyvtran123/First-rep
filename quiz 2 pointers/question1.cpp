#include <iostream>
#include <algorithm>
#include <random>
#include <iomanip>
using namespace std;


void fillupNumbers(int *ptr, const int N)
{
 srand(time(0));
	for(int i=0; i<N;i++)
	
		*(ptr+i) = rand() % 100;
	
}

void printNumbers(int *ptr, const int N)
{
for (int i=0; i<N;i++)
  cout << *(ptr+i) << "\t";
	cout << endl;
}
 
 int main()
{
 const int N=10;
 int *ptr = new int [N];
 fillupNumbers(ptr,N);
 printNumbers(ptr,N);

}

