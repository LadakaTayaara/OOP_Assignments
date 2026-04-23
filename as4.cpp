#include <iostream>
using namespace std;

class Point{
public:
    int x, y;

    Point(int a = 0, int b = 0){
        x = a;
        y = b;
    }
};

int add(int a,int b){
    return a + b;
}

int sub(int a,int b){
    return a - b;
}

int mul(int a,int b){
    return a * b;
}

Point add(Point p1,Point p2){
    return Point(p1.x + p2.x , p1.y + p2.y);
}

Point sub(Point p1,Point p2){
    return Point(p1.x - p2.x , p1.y - p2.y);
}

Point mul(Point p1,Point p2){
    return Point(p1.x * p2.x , p1.y * p2.y);
}

void display(Point p){
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

int main(){

    int a,b;

    cout<<"Enter two integers: ";
    cin>>a>>b;

    cout<<"\nInteger Operations\n";
    cout<<"Addition: "<<add(a,b)<<endl;
    cout<<"Subtraction: "<<sub(a,b)<<endl;
    cout<<"Multiplication: "<<mul(a,b)<<endl;

    int x1,y1,x2,y2;

    cout<<"\nEnter coordinates of Point 1 (x y): ";
    cin>>x1>>y1;

    cout<<"Enter coordinates of Point 2 (x y): ";
    cin>>x2>>y2;

    Point p1(x1,y1);
    Point p2(x2,y2);

    Point p3 = add(p1,p2);
    Point p4 = sub(p1,p2);
    Point p5 = mul(p1,p2);

    cout<<"\nPoint Operations\n";

    cout<<"Addition: ";
    display(p3);

    cout<<"Subtraction: ";
    display(p4);

    cout<<"Multiplication: ";
    display(p5);

    return 0;
}
