#include <iostream>
using namespace std;

class Base {
    int var;
    public :
        Base() {}
    Base(int a) { var = a;}
    friend class GetSet;
};

class GetSet {
    public:
        void set(Base& obj, int x) {
            obj.var = x;
        }

        int get(Base& obj) {
            return obj.var;
        }    
};

int main() {
    Base obj(10);
    GetSet gs;
    cout << "Value before set function : " << gs.get(obj) << endl;
    gs.set(obj, 30);
    cout << "Value after set function : " << gs.get(obj) << endl;
    return 0;
}