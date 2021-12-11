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

int partition(Course arr[],int first, int last)
{
  Course pivot = arr[last];
	int i = -1;
	for (int j = 0; j < last; j++)
	{
		if (arr[j].getSid() < pivot.getSid())
			swap(arr[++i], arr[j]);
	}
	swap(arr[i + 1], arr[last]);
	return i + 1;
}
void qsort(Course arr[], int first, int last)
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
		    cout<<"Course Name: " << arr[i].getSname()<< endl;
        cout <<"Course ID: "<< arr[i].getSid()<< endl;
        cout <<"Course Credit: "<< arr[i].getCredit() << endl;  
  }
    
    cout << endl;
}

int main()
{
	Course arr[10];
	// Course s[10];
    cout << "Courses before sort: "<< endl;
    
    arr[0].setCid(2);
    arr[0].setCname("Calculus");
    arr[0].setCcredit(0);
    
    
    arr[8].setCid(6);
    arr[8].setCname("trig");
    arr[8].setCcredit(1);
    
    
    arr[1].setCid(0);
    arr[1].setCname("History");
    arr[1].setCcredit(2);
    
    
    arr[2].setCid(1);
    arr[2].setCname("Health");
    arr[2].setCcredit(3);
    
    
    arr[9].setCid(9);
    arr[9].setCname("Chemistry");
    arr[9].setCcredit(4);
    
    
    arr[5].setCid(4);
    arr[5].setCname("Biology");
    arr[5].setCcredit(5);
   
    
    arr[6].setCid(7);
    arr[6].setCname("Psychology");
    arr[6].setCcredit(6);
    
    
    arr[7].setCid(8);
    arr[7].setCname("Speech");
    arr[7].setCcredit(7);
   
    
    arr[4].setCid(5);
    arr[4].setCname("Physics");
    arr[4].setCcredit(8);
    
    
    arr[3].setCid(3);
    arr[3].setCname("English");
    arr[3].setCcredit(9);
    
  
  
  const int N = 10;
	printArray(arr, N);
  qsort(arr,0, N-1); 
	cout << "Courses after sort: "<< endl;
  printArray(arr, N);

}