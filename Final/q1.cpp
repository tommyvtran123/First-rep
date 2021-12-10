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
    Course s0,s1,s2,s3,s4,s5,s6,s7,s8,s9;
    
    s0.setCid(111111);
    s0.setCname("Calculus");
    s0.setCcredit(0);
    s0.printCourse();
    
    s1.setCid(2222);
    s1.setCname("trig");
    s1.setCcredit(1);
    s1.printCourse();
    
    s2.setCid(3333);
    s2.setCname("History");
    s2.setCcredit(2);
    s2.printCourse();
    
    s3.setCid(4444);
    s3.setCname("Health");
    s3.setCcredit(3);
    s3.printCourse();
    
    s4.setCid(5555);
    s4.setCname("Chemistry");
    s4.setCcredit(4);
    s4.printCourse();
    
    s5.setCid(6666);
    s5.setCname("Biology");
    s5.setCcredit(5);
    s5.printCourse();
    
    s6.setCid(7777);
    s6.setCname("Psychology");
    s6.setCcredit(6);
    s6.printCourse();
    
    s7.setCid(8888);
    s7.setCname("Speech");
    s7.setCcredit(7);
    s7.printCourse();
    
    s8.setCid(99999);
    s8.setCname("Physics");
    s8.setCcredit(8);
    s8.printCourse();
    
    s9.setCid(10101010);
    s9.setCname("English");
    s9.setCcredit(9);
    s9.printCourse();

    int target = 0;

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    cout << "Enter ID of wanted course: ";
    cin >> target;
 
    int n = sizeof(arr)/sizeof(arr[0]);
 
    int first = 0, last = n - 1;
    int index = BinarySearch(arr, first, last, target);
 
    if (index != -1) {
        cout << "Course is found in the array at position: "<< target; 
        
    }
    else {
        cout <<"Course not found in the array";
    }
 
    return 0; 
}

  
  


