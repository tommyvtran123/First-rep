
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
void printStudents(Students * const, int);
void sortStudents(Students * const, int);


int main()
{
	const int N = 10;
	Students *ptr;

	ptr = makeStudents(N);
	printStudents(ptr, N);
	sortStudents(ptr, N);
	printStudents(ptr, N);

}

Students *makeStudents(int N)
{
	ifstream ifs;
    Students    *ptr= new Students [N];

    ifs.open("students.txt");
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

 void printStudents(Students * const s, const int N)
{
for(int i=0; i<N;i++){
	cout << "ID : "  << (s+i)->sid << "\t";  
	cout << "Name :" << (s+i)->sname <<"\t";
	cout << "Score 1 :" <<(s+i)->scores[0] <<"\t";
	cout << "Score 2 :" <<(s+i)-> scores[1] <<"\t";
	cout << "Scores 3 :" <<(s+i)-> scores[2] <<"\n";
}
cout << endl;
}

void sortStudents(Students * const s, int N)
{
	int sum[N];

	for(int i=0;i<N;i++)
	{
		sum[i] = 0;
		for (int j=0; j<NUM_SCORES; j++)
			sum[i] += (s+i)->scores[j];
	}

	for(int i=0; i<N-1; i++) // 
	{
		for(int j=0; j<N-1; j++) 
		{
			if ( sum[j] > sum[j+1])
			{
			 	swap((s+j)->sid, (s+j+1)->sid);

				swap((s+j)->sname, (s+j+1)->sname);
				
				swap( (s+j)->scores[0], (s+j+1)->scores[0]);
				swap( (s+j)->scores[1], (s+j+1)->scores[1]);
				swap( (s+j)->scores[2], (s+j+1)->scores[2]);

				swap(sum[j], sum[j+1]);
				
			}
		}
	}
			
  }

