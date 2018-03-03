#include <iostream>
#include <string>
using namespace std;

class Person{
public:
string *name;
int age;

    Person(string name,int age){
        // if name was not pointer, this->name = name
        // Since name is pointer, allocate dynamically
        this->name = new string(name);
        this->age = age;
    }

    Person(const Person &p){
        cout << "copy constructor is called "<<endl;
        name = new string(*p.name);
        age = p.age;
    }

    void changeNameandAge(string name,int age){
        *(this->name) = name;
        this->age = age;
    }

    void introduce(){
        cout << "Name : " << *name << " Age: " << age <<endl;
    }
};

int main()
{
    Person object1("Kapil BS",22);
    object1.introduce();

    Person object2 = object1; // Here Copy Constructor will be called
    object2.introduce(); // Shallow copy, existing info of the object will be taken

    object1.changeNameandAge("Kapil MS",24); // Changing value for object1
    object1.introduce();

    object2.introduce(); //
    return 0;
}
