#include <iostream>
using namespace std;

class NonVirtualClass {
public:
	void foo() {} // size of class with no Virtual function = 1
};

// Classes with virtual functions are bigger in size
// Since they have hidden pointer inside them
// This pointer points to vtable

class VirtualClass {
public:
	virtual void foo() {}
};

int main() {
	cout << "Size of NonVirtualClass: " << sizeof(NonVirtualClass) << endl;
	cout << "Size of VirtualClass: " << sizeof(VirtualClass) << endl;
}
