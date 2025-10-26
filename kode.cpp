#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1416;

double getDistance(double xA, double yA, double xB, double yB) {
    return sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
}

double getRadius(double xA, double yA, double xB, double yB) {
    return getDistance(xA, yA, xB, yB);
}

double calcCircumference(double radius) {
    return 2 * PI * radius;
}

double calcArea(double radius) {
    return PI * pow(radius, 2);
}

int main() {
    double centerX, centerY, pointX, pointY;
    double radius, diameter, circumference, area;

    cout << "=== Circle Geometry Calculator ===\n";
    cout << "Enter center coordinates (x1 y1): ";
    cin >> centerX >> centerY;
    cout << "Enter a point on the circle (x2 y2): ";
    cin >> pointX >> pointY;

    radius = getRadius(centerX, centerY, pointX, pointY);
    diameter = 2 * radius;
    circumference = calcCircumference(radius);
    area = calcArea(radius);

    cout << "\n=== Computation Results ===\n";
    cout << "Radius        : " << radius << endl;
    cout << "Diameter      : " << diameter << endl;
    cout << "Circumference : " << circumference << endl;
    cout << "Area          : " << area << endl;

    return 0;
}