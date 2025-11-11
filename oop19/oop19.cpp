#include <iostream>
#include <string>
using namespace std;

class Human
{
protected:
	string name;
	int age;
public:
	Human() { age = 0; }
	Human(string n, int a)
	{
		name = n;
		age = a;
	}
	void Print()
	{
		cout << "Name: " << name << ", Age: " << age << endl;
	}
};
class Student : public Human
{
	int year;
	double Average;
public:
	Student(){}
	Student (string n, int a, int y, double avg) : Human(n, a)
	{
		year = y;
		Average = avg;
	}

};


int main()
{

}