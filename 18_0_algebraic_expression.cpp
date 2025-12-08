#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter values of a and b: ";
    cin >> a >> b;

    int result = (a + b) * (a - b);

    cout << "Result = " << result << endl;

    return 0;
}
