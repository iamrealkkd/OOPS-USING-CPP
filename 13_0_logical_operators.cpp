#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 10;

    cout << (x > 0 && y > 0) << endl;
    cout << (x > 0 || y < 0) << endl;
    cout << !(x > y) << endl;

    return 0;
}
