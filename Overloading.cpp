#include <iostream>
using namespace std;

void print(int value) {
    cout << "Integer value is : " << value << endl;
}

double print(double value) {
    cout << "Double value is : " << value << endl;
    return value;
}

int main() {
    print(5);
    print(10.5);
    return 0;
}