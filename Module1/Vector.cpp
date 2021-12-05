#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int>);

int main(){

int new_number;
vector<int>::iterator it;
vector<int> numbers =  {10, 13, 5, 7, 25};
printVector(numbers);
sort(numbers.begin(), numbers.end());
printVector(numbers);
     

cout << "Enter your number to insert : ";
cin >> new_number;

for(it = numbers.begin();it<numbers.end();it++){

  if(*it > new_number)

break;

}

numbers.insert(it , new_number );
printVector(numbers);


cout << "Enter your number to insert : ";
cin >> new_number;
for(it=numbers.begin();it<numbers.end();it++){

  if(*it == new_number)

break;
}
if(it == numbers.end())
  cout << "value not found \n";
else
numbers.erase(it);
printVector(numbers);


}
void printVector(vector<int> vec)
{
vector<int>::iterator it;
for(it=vec.begin(); it<vec.end();it++)

cout << *it << "\t";
cout<< endl;


}