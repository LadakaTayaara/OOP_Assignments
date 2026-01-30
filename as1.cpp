#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
    void rectangle();
    void triangle();
    void square();
    void circle();
    void sphere();
    void cylinder();
};

void Shape::rectangle()
{
    int l, b;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;

    cout << "Perimeter of rectangle: " << 2 * (l + b) << "\n";
    cout << "Area of rectangle: " << l * b << "\n";
}

void Shape::triangle()
{
    int s1, s2, s3;
    float s, area;

    cout << "Enter three sides of triangle: ";
    cin >> s1 >> s2 >> s3;

    int perimeter = s1 + s2 + s3;
    s = perimeter / 2.0;

    area = sqrt(s * (s - s1) * (s - s2) * (s - s3));

    cout << "Perimeter of triangle: " << perimeter << "\n";
    cout << "Area of triangle: " << area << "\n";
}

void Shape::square()
{
    int a;
    cout << "Enter side of square: ";
    cin >> a;

    cout << "Perimeter of square: " << 4 * a << "\n";
    cout << "Area of square: " << a * a << "\n";
}

void Shape::circle()
{
    float r;
    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Circumference of circle: " << 2 * 3.14 * r << "\n";
    cout << "Area of circle: " << 3.14 * r * r << "\n";
}

void Shape::sphere()
{
    float r;
    cout << "Enter radius of sphere: ";
    cin >> r;

    cout << "Surface area of sphere: " << 4 * 3.14 * r * r << "\n";
}

void Shape::cylinder()
{
    float r, h;
    cout << "Enter radius and height of cylinder: ";
    cin >> r >> h;

    cout << "Curved surface area of cylinder: "
         << 2 * 3.14 * r * h << "\n";
}

int main()
{
    Shape s;   // Object creation
    int choice;

    cout << "Enter your choice\n1. Rectangle\n2. Triangle\n3. Square\n4. Circle\n5. Sphere\n6. Cylinder\n";
    cin >> choice;

    switch(choice) {
        case 1: s.rectangle(); 
        break;
        
        case 2: s.triangle(); 
        break;
        
        case 3: s.square(); 
        break;
        
        case 4: s.circle();
        break;
        
        case 5: s.sphere(); 
        break;
        
        case 6: s.cylinder(); 
        break;
        
        default: cout << "Invalid choice\n";
    }

    return 0;
}