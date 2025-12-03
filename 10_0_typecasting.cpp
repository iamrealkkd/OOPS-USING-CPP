#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 3.5;

    float c = a + b;  
    int d = (int)b;

    cout << "Implicit Casting (a + b) = " << c << endl;
    cout << "Explicit Casting of b = " << d << endl;

    return 0;
}
