#include <iostream>
#include <cmath>
using namespace std;
class Triangle
 {
private:
    double side1, side2, side3;
public:
    // Constructor to initialize the sides of the triangle
    Triangle(double a, double b, double c) {
        side1 = a;
        side2 = b;
        side3 = c;
    }
    // Function to calculate the perimeter
    double getPerimeter() const {
        return side1 + side2 + side3;
    }
    // Function to calculate the area
    double getArea() const {
        double s = getPerimeter() / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    // Function to print the area and perimeter
    void printAreaAndPerimeter() const {
         cout << "Perimeter: " << getPerimeter() <<endl;
         cout << "Area: " << getArea() << endl;
    }
};
int main() {
    // Create a Triangle object
    Triangle triangle(3, 4, 5);
    // Print the area and perimeter of the triangle
    triangle.printAreaAndPerimeter();
    return 0;
}

