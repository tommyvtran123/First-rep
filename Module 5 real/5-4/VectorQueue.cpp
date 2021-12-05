#include <iostream>
using namespace std;
#include <ctime>
#include "VectorQueue.hpp"


int main()
{
	VectorQueue<int, 10> q;

	q.enqueue(12);
	q.enqueue(5);
	q.enqueue(8);
	q.enqueue(2);
	q.enqueue(4);
    q.enqueue(12);
    q.enqueue(7);
    q.enqueue(6);
    q.enqueue(3);
    q.enqueue(10);
  

	if ( q.isFull() )
		cout << "Queue is Full \n";
    cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl; 
    cout << q.dequeue() << endl;
    q.enqueue(12);

	if ( q.isEmpty() )
		cout << "Queue is Empty \n";
	else
		cout << " Queue is not Empty\n";
	cout << q.dequeue() << endl;

}