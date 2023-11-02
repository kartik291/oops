#include <iostream>
using namespace std;
class Base {
public:
	virtual ~Base() = 0; 
};
Base::~Base()
{
	cout << " virtual destructor is called";
}


class Derived : public Base {
public:
	~Derived() { cout << "~Derived() is executed\n"; }
};

int main()
{
	
	Base* b = new Derived();
	delete b;
	return 0;
}
