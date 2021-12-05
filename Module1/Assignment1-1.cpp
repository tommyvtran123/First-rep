#include <iostream>
using namespace std;
#include <fstream>
#include <cmath>


struct Student{
  int ID;
  char sname[20];
  double score[2];
  double sum;
  double avg;
};

int main(){
 ifstream ifs;
 ofstream ofs;

 Student s;

ifs.open("student.txt");
ofs.open("student.bin");

if (ifs.fail()){
  cout << "File cannot be opened \n";
  exit(0);
}
// repeat this program 10 times
for (int i=0; i<10; i++)
{
	ifs >> s.ID;
	ifs >> s.sname;
	ifs >> s.score[0];
	ifs >> s.score[1];
	s.sum = s.score[0] + s.score[1];
	s.avg = s.sum /2.0;

	cout << "ID : " << s.ID ;
	cout << "Name : " << s.sname ;
	cout << "Score 1 : " << s.score[0] ;
	cout << "Score 2 : " << s.score[1] ;
	cout << "Sum : " << s.sum;
	cout << "Average : " << s.avg; 

	ofs.write((char *)&s, sizeof(s)  );

}


ifs.close();
ofs.close();

}


