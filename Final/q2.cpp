#include <iostream>
using namespace std;
class Course
{
private: 
    int  CID;
    string Cname;
    int Ccredit;
public:
  Course() : CID(0), Cname(), Ccredit() {}
	Course(int id, string name,int credit)
	{
		CID = id;
		Cname = name;
    Ccredit = credit;
  }
	int getSid() const { return CID; }
	string getSname() const { return Cname; }
  int getCredit() const { return Ccredit;}
	void setCid(int id) { CID = id;}
  void setCname(string name) { Cname = name;}
  void setCcredit(int credit) {Ccredit = credit;}
	
  void qsort(Course arr[], int, int);
  int partition(Course arr[], int, int);
  void printArray(Course arr[], int);
  
  
  void printCourse() const
	
    {
    
    cout << "Course ID: " << CID << "\n";
		cout << "Course Name: " << Cname << "\n";
		cout << "Course Credit: " << Ccredit << "\n";
	
    }
}; 

int partition(int arr[], int first, int last)
{
	int pivot = arr[last];
	int i = -1;
	for (int j = 0; j < last; j++)
	{
		if (arr[j] < pivot)
			swap(arr[++i], arr[j]);
	}
	swap(arr[i + 1], arr[last]);
	return i + 1;
}
void qsort(int arr[], int first, int last)
{
	  int pivot_idx;

	  if ( first >= last )
		return;
	
  pivot_idx = partition(arr,first, last);
	qsort(arr, first, pivot_idx-1);
  qsort(arr, pivot_idx+1, last); 
}

void printArray(Course arr[], int N)
{

	for (int i = 0; i < N; i++)
  {
		cout << arr[i].getSid()<< "\t";
    cout << arr[i].getSname()<< "t";
    cout << arr[i].getCredit()<< "t";  
  }
    
    cout << endl;
}

int main()
{
	Course arr[10];
	// Course s[10];
    
    arr[0].setCid(2);
    arr[0].setCname("Calculus");
    arr[0].setCcredit(0);
    arr[0].printCourse();
    
    arr[1].setCid(6);
    arr[1].setCname("trig");
    arr[1].setCcredit(1);
    arr[1].printCourse();
    
    arr[2].setCid(8);
    arr[2].setCname("History");
    arr[2].setCcredit(2);
    arr[2].printCourse();
    
    arr[3].setCid(1);
    arr[3].setCname("Health");
    arr[3].setCcredit(3);
    arr[3].printCourse();
    
    arr[4].setCid(9);
    arr[4].setCname("Chemistry");
    arr[4].setCcredit(4);
    arr[4].printCourse();
    
    arr[5].setCid(4);
    arr[5].setCname("Biology");
    arr[5].setCcredit(5);
    arr[5].printCourse();
    
    arr[6].setCid(7);
    arr[6].setCname("Psychology");
    arr[6].setCcredit(6);
    arr[6].printCourse();
    
    arr[7].setCid(8);
    arr[7].setCname("Speech");
    arr[7].setCcredit(7);
    arr[7].printCourse();
    
    arr[8].setCid(5);
    arr[8].setCname("Physics");
    arr[8].setCcredit(8);
    arr[8].printCourse();
    
    arr[9].setCid(3);
    arr[9].setCname("English");
    arr[9].setCcredit(9);
    arr[9].printCourse();
  
  
  const int N = 10;

	printArray(arr, N);
	//qsort(arr,0, N-1); 
	printArray(arr, N);

}