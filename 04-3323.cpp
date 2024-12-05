#include <iostream>
#include <cmath>
using namespace std;
class Triangle {
private:
    double a, b, c;
public:
    // Constructor to initialize the sides
    Triangle(double side1, double side2, double side3)
     {
        a = side1;
        b = side2;
        c = side3;
    }

    // Function to calculate the perimeter
    double getPerimeter() {
        return a + b + c;
    }

    // Function to calculate the area using Heron's formula
    double getArea() {
        // Semi-perimeter
        double s = getPerimeter() / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    void display()
    {
        cout << "Perimeter: " << getPerimeter() << " units" << endl;
        cout << "Area: " << getArea() << " square units" << endl;
    }
};

int main()
 {
    // Create a Triangle object
    Triangle triangle(3, 4, 5);
    triangle.display();
    return 0;
}


