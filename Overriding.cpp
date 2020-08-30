#include <iostream>
using namespace std;

class Person {
public:
    //run time polymorphism usign virtual
    virtual void printName() { 
        cout << "Person" << endl; 
    }
};

class Man : public Person {
    public:
        void printName() {
            cout << "Sanjay" << endl;
        };
};

int main() {
    Man man;
    man.printName();
    Person *p = &man;
    p->printName();
    return 0;
}