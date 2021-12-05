#include <iostream>
#include <fstream>
using namespace std;
#include <iostream>
#include <fstream>
using namespace std;

const int 	MAX_LEN = 20;
const int 	NUM_SCORES = 3;
struct Students {
	int 	sid;
	char 	sname[MAX_LEN];
	double 	scores[NUM_SCORES];
};

Students *makeStudents(int );
void findavg(Students *const, int);
void printStudents(Students *const, int);

int main()
{
	const int N = 10;
	Students *ptr;

	ptr = makeStudents(N);
	printStudents(ptr,N);
  findavg(ptr,N);


}

Students *makeStudents(int N)
{
	ifstream ifs;
  ofstream ofs;  
    Students    *ptr= new Students [N];

    ifs.open("students.txt");
    ofs.open("students.bin");
    if ( ifs.fail())
    {
        cerr << "File open error\n";
        exit(0);
    }

	for(int i=0;i<N; i++)
    {
        ifs >> (ptr+i)->sid >> (ptr+i)->sname;
        for(int j=0; j<NUM_SCORES; j++)
			ifs >> (ptr+i)->scores[j] ;
		if ( ifs.fail() )
		{
			cerr << "File Read Error\n";
			exit(0);
		}
    }
	return ptr;
}

void findavg(Students * const s, const int N){

  double avg[N];
 cout << "All students score average above 85" << endl;
	for(int i=0;i<N;i++)
	{
	avg[i] = 0;
		for (int j=0; j<NUM_SCORES; j++)
			avg[i] += (s+i)->scores[j]/3;
  
  if (avg[i] > 85)
  {
    cout << "ID :"  << (s+i)->sid << "\t";  
	  cout << "Name :" << (s+i)->sname <<"\t";
	  cout << "Score 1 :" <<(s+i)->scores[0] <<"\t";
	  cout << "Score 2 :" <<(s+i)-> scores[1] <<"\t";
	  cout << "Scores 3 :" <<(s+i)-> scores[2] <<"\t";
    cout << "Scores average :" << avg[i] << "\t";
  
  }
    cout << endl;
    }
}
  void printStudents(Students *const s, const int N)
  {
cout << "All student records" << endl;
    for (int i=0; i<N; i++)
    {
  cout << "ID : "  << (s+i)->sid << "\t";  
	cout << "Name :" << (s+i)->sname <<"\t";
	cout << "Score 1 :" <<(s+i)->scores[0] <<"\t";
	cout << "Score 2 :" <<(s+i)-> scores[1] <<"\t";
	cout << "Scores 3 :" <<(s+i)-> scores[2] <<"\n";
    }
  cout << endl;
  
  }