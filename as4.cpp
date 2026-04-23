#include <iostream>  
using namespace std;

// Point class 
class Point{
public:
    int x, y;   // data members (coordinates)

    // Parameterized Constructor with default parameters to initialize x and y
    Point(int a = 0, int b = 0){
        x = a;
        y = b;
    }
};

//  Function Overloading for Integers

// Function to add two integers
int add(int a,int b){
    return a + b;
}

// Function to subtract two integers
int sub(int a,int b){
    return a - b;
}

// Function to multiply two integers
int mul(int a,int b){
    return a * b;
}

// Function Overloading for Point Objects

// Function to add two Point objects
Point add(Point p1,Point p2){
    // adds x with x and y with y
    return Point(p1.x + p2.x , p1.y + p2.y);
}

// Function to subtract two Point objects
Point sub(Point p1,Point p2){
    return Point(p1.x - p2.x , p1.y - p2.y);
}

// Function to multiply two Point objects
Point mul(Point p1,Point p2){
    return Point(p1.x * p2.x , p1.y * p2.y);
}

// Function to display a Point object
void display(Point p){
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

int main(){

    int a,b;

    // Taking input for integers
    cout<<"Enter two integers: ";
    cin>>a>>b;

    // Performing integer operations
    cout<<"\nInteger Operations\n";
    cout<<"Addition: "<<add(a,b)<<endl;        // calls int version
    cout<<"Subtraction: "<<sub(a,b)<<endl;
    cout<<"Multiplication: "<<mul(a,b)<<endl;

    int x1,y1,x2,y2;

    // Taking input for Point 1
    cout<<"\nEnter coordinates of Point 1 (x y): ";
    cin>>x1>>y1;

    // Taking input for Point 2
    cout<<"Enter coordinates of Point 2 (x y): ";
    cin>>x2>>y2;

    // Creating point objects 
    Point p1(x1,y1);
    Point p2(x2,y2);

    // Performing operations on point objects
    Point p3 = add(p1,p2);   // calls point version
    Point p4 = sub(p1,p2);
    Point p5 = mul(p1,p2);

    cout<<"\nPoint Operations\n";

    //display results of point operations
    cout<<"Addition: ";
    display(p3);

    cout<<"Subtraction: ";
    display(p4);

    cout<<"Multiplication: ";
    display(p5);

    return 0;   // program ends
}
