#include <iostream>  
using namespace std; 

// Base class
class shape{
protected:
    int side1, side2;   // side1 = length/radius, side2 = breadth

public:
    // Function to accept input
    void accept(int ch){
        if(ch==1){                           // If rectangle is selected
            cout<<"Enter length: ";
            cin>>side1;  

            cout<<"Enter breadth: ";
            cin>>side2; 
        }
        else{                                      // If circle is selected
            cout<<"Enter radius: ";
            cin>>side1;  
        }
    }  // <-- FIXED: added missing brace here

    // Pure virtual functions (overridden in derived classes)
    virtual void area()=0;
    virtual void perimeter()=0;
};

// Derived class for Rectangle
class rectangle: public shape{
public:
    void area(){
        cout<<"Area of rectangle is: "<<side1*side2<<endl;
    }

    void perimeter(){
        cout<<"Perimeter of rectangle is: "<<2*(side1+side2)<<endl;
    }
};

// Derived class for Circle
class circle: public shape{
public:
    void area(){
        cout<<"Area of circle is: "<<3.14*side1*side1<<endl;
    }

    void perimeter(){
        cout<<"Perimeter of circle is: "<<2*3.14*side1<<endl;
    }
};

// Main function
int main(){
    int ch=0;      
    shape *s;

    while(ch!=3){
        cout<<"\n1) Rectangle\n2) Circle\n3) Exit\nEnter choice: ";
        cin>>ch;

        switch(ch){
        case 1:{
            rectangle r;
            s=&r;

            r.accept(ch);

            s->area();
            s->perimeter();

            break;
        }

        case 2:{
            circle c;
            s=&c;

            c.accept(ch);

            s->area();
            s->perimeter();

            break;
        }
        }
    }
    return 0;
}
