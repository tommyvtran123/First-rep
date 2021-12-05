#include <iostream>
#include <fstream>
using namespace std;

struct Student{
  int ID;
  char sname[20];
  double score[2];
  double sum;
  double avg;
};

int main(){
 ifstream ifs;

 Student s;
ifs.open("student.bin");

if (ifs.fail()){

  cout << "File cannot be opened \n";
  exit(0);
}

int 	targetid, found =0;
cout << "Enter the student ID from these options: \n";
cout << "10001 - 10010:\n";
cin >> targetid;

	for(int i=0; i<10;i++)
	{
		ifs.read((char *)&s, sizeof(s)  );
		if (targetid == s.ID ){ // to find the particular id
			cout << "ID:" << s.ID << "\t";
			cout << "name:" << s.sname << "\t";
			cout << "Score 1:" << s.score[0] << "\t";
     	cout << "Score 2:" << s.score[1] << "\t";
      cout << "Grade Average:"<< s.avg << "\t";
			 found = 1;
    	}
    }
	if ( found == 0 ){
    cout << "invalid ID \n";
    }
}