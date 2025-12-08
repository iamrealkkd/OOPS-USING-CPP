#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter a number: ";
    cin >> a;

    string result = (a % 2 == 0) ? "Even" : "Odd";
    cout << "Number is " << result << endl;

    return 0;
}
