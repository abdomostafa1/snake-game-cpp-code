#include<iostream> 
using namespace std;
class Person  {
	// Data members of person 
public:
	int x1=12;
	Person(int x) { 
		static int c = 0;
		cout << "Person::Person(int ) called	Counter=   "<<++c<<endl; }
Person(string x) { 
		static int cc = 0;
		cout << "Person::Person(int ) called	Counter=   "<<++cc<<endl; }
Person()
{
	for (size_t i = 0; i < 1; i++)
	{
		cout << i << endl;
	}
}
};

class Faculty :virtual public Person {
	// data members of Faculty 
public:
	int x2;
	Faculty(int x) {
		cout << "Faculty::Faculty(int ) called" << endl;
	}
	void ga()
	{
		cout << "Facluty Class\n";
	}
};

class Student :virtual  public Person {
	// data members of Student 
public:
	int x3;
	int y=34;
	Student(string x) {
		cout << "Student::Student(int ) called" << endl;
	}
	virtual void ga()final
	{
		cout << "Student Class\n";
	}
};

class TA : public Faculty, public Student {
public:
	int x4;
	int y=2;
	TA(int x) :Student("shhdh"), Faculty(x)  {
		cout << "TA::TA(int ) called" << endl;
	}
	
};
class dd :TA
{
	dd():Person(5),TA(4)
	{
		;
	}
};
int main()
{
	try
	{
		int x;
		cin >> x;

		if (x > 12)
			throw 5;
		cout << "Ok";
		cout << "bad ";
			;
	}
	catch(int gk)
	{
		cout<<gk;
	}

}
