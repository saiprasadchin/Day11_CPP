#include <iostream>
using namespace std;

class Base {
    int var;
    public :
        Base() {}
        friend void set(Base&, int);
        friend int get(Base&);
};

void set(Base& obj, int x) {
    obj.var = x;
}

int get(Base& obj) {
    return obj.var;
}    

int main() {
    Base obj;
    set(obj, 20);
    cout << "Value after set function : " << get(obj) << endl;
    return 0;
}