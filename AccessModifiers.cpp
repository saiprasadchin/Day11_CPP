#include <iostream>
using namespace std;

class MyClass{
    private :
        int x = 10;
    
    protected :
        int y = 20;
    
    public : 
        int z = 30;
};

class Child : public MyClass{
    public :
    void show() {
        cout << "MyClass protected value " << y << endl;
    }
};

int main(){
    MyClass obj;
    Child objChild;
    cout << "Cannot access x as it is private memeber of MyClass" << endl;
    cout << "Public value of MyClass : " << obj.z << endl;
    objChild.show();
    return 0;
}