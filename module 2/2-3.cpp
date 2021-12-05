#include <iostream>
#include <iomanip>
#include <algorithm>
#include <random>
using namespace std;


void makeNumbers(double *&ptr, const int N)
{
 srand(time(0));
	for(int i=0; i<N;i++)
	
		*(ptr+i) = (double)rand()/RAND_MAX*100.0;
	
}
void sortNumbers(double *ptr, const int N)
{
sort(ptr,ptr+N);
}
	

void printNumbers(double *&ptr, const int N)
{
for (int i=0; i<N;i++)
  cout << *(ptr+i) << "\t";
	cout << endl;


}
void deleteNumbers(double *&ptr)
{
  delete ptr;
} 

 
 int main()
{
 const int N=10;
 double *ptr = new double [N];
 makeNumbers(ptr,N);
 sortNumbers(ptr,N);
 printNumbers(ptr,N);
 deleteNumbers(ptr);

}
 