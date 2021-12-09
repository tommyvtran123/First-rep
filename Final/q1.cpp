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
	
	void printCourse() const
	{
		cout << "Course ID: " << CID << "\n";
		cout << "Course Name: " << Cname << "\n";
		cout << "Course Credit: " << Ccredit << "\n";
	}
}; 

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
  }

  int main()
  {
    Course s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
    
    s1.setCid(111111);
    s1.setCname("Calculus");
    s1.setCcredit(0);
    s1.printCourse();
    
    s1.setCid(2222);
    s1.setCname("trig");
    s1.setCcredit(1);
    s1.printCourse();
    
    s1.setCid(3333);
    s1.setCname("History");
    s1.setCcredit(2);
    s1.printCourse();
    
    s1.setCid(4444);
    s1.setCname("Health");
    s1.setCcredit(3);
    s1.printCourse();
    
    s1.setCid(5555);
    s1.setCname("Chemistry");
    s1.setCcredit(4);
    s1.printCourse();
    
    s1.setCid(6666);
    s1.setCname("Biology");
    s1.setCcredit(5);
    s1.printCourse();
    
    s1.setCid(7777);
    s1.setCname("Psychology");
    s1.setCcredit(6);
    s1.printCourse();
    
    s1.setCid(8888);
    s1.setCname("Speech");
    s1.setCcredit(7);
    s1.printCourse();
    
    s1.setCid(99999);
    s1.setCname("Physics");
    s1.setCcredit(8);
    s1.printCourse();
    
    s1.setCid(10101010);
    s1.setCname("English");
    s1.setCcredit(9);
    s1.printCourse();

  }

