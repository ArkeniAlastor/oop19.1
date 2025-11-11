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
	void Print()
	{
		Human::Print();
		cout << "Year: " << year << ", Average: " << Average << endl;
	}

};

class Teacher
{
protected:
	string schoolname;
	string subject;
public:
	Teacher() {}
	Teacher(string sn, string sub)
	{
		schoolname = sn;
		subject = sub;
	}
	void Print()
	{
		cout << "School Name: " << schoolname << ", Subject: " << subject << endl;
	}
};
class Assistant : public Teacher
	{
		int experience;
public:
	Assistant() {}
	Assistant(string sn, string sub, int exp) : Teacher(sn, sub)
	{
		experience = exp;
	}
	void Print()
	{
		Teacher::Print();
		cout << "Experience: " << experience << " years" << endl;
	}
};


int main()
{
	Student st("Mark", 20, 2, 3.5);
	st.Print();
	Assistant as("High School", "Mathematics", 5);
	as.Print();
}