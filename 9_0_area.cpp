#include <iostream>
using namespace std;

int main() {
    float r, base, height, length, breadth;

    
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of Circle = " << 3.1416 * r * r << endl;

   
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = " << 0.5 * base * height << endl;

    
    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle = " << length * breadth << endl;

    return 0;
}
