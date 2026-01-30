#include <iostream>
using namespace std;

class Circle 
{
private:
    float radius;

public:
    Circle() {
        radius = 1.0;
        cout << "Circle default constructor called\n";
    }

    Circle(float r) {
        radius = r;
        cout << "Circle parameterized constructor called\n";
    }

    float area() {
        return 3.141 * radius * radius;
    }

    float perimeter() {
        return 2 * 3.141 * radius;
    }

    ~Circle() {
        cout << "Circle destructor called\n";
    }
};


class Rectangle {
private:
    float length, breadth;

public:
   
    Rectangle() {
        length = 1.0;
        breadth = 1.0;
        cout << "Rectangle default constructor called\n";
    }

   
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
        cout << "Rectangle parameterized constructor called\n";
    }

   
    float area() {
        return length * breadth;
    }

   
    float perimeter() {
        return 2 * (length + breadth);
    }

   
    ~Rectangle() {
        cout << "Rectangle destructor called\n";
    }
};

int main() {
    Circle c1; 
    
    int r;
    cout << "Enter radius of circle: \n";
    cin >> r;           
    Circle c2(r);

    cout << "Circle 1 Area: " << c1.area() << "\n";
    cout << "Circle 1 Perimeter: " << c1.perimeter() << "\n";

    cout << "Circle 2 Area: " << c2.area() << "\n";
    cout << "Circle 2 Perimeter: " << c2.perimeter() << "\n";

    Rectangle r1;   
    
    int l, b;
    cout << "Enter length and breadth of rectangle: \n";
    cin >> l >> b;     
    Rectangle r2(4.0, 6.0);

    cout << "Rectangle 1 Area: " << r1.area() << "\n";
    cout << "Rectangle 1 Perimeter: " << r1.perimeter() << "\n";

    cout << "Rectangle 2 Area: " << r2.area() << "\n";
    cout << "Rectangle 2 Perimeter: " << r2.perimeter() << "\n";

    return 0;
}