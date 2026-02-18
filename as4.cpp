//develop a base shape class with a virtual function for drawing. Create derived classes for circle and rectangle that ovveride the draw function. Write a program that uses polymorphism to call the appropriate draw function for different shapes.

#include <iostream>
using namespace std;

class shape{
    public:
    virtual void draw(){
        cout<<"A shape drawn\n";
    }
};

class circle:public shape{
    public:
    void draw(){
        cout<<"A circle is drawn\n";
    }
};

class rectangle:public shape{
    public:
    void draw(){
        cout<<"A rectangle is drawn\n";
    }
};

int main(){
    char ch='y';
    int cch;
    while(ch!='n'){
        cout<<"\nEnter the shape you want to create\n1.Normal Shape\n2.Circle\n3.Rectangle\n4.Exit\n";
        cin>>cch;
        shape* ptr;
        rectangle r;
        circle c;
        shape s;
        switch(cch){
            case 1:
            ptr=&s;
            ptr->draw();
            break;

            case 2:
            ptr=&c;
            ptr->draw();
            break;

            case 3:
            ptr=&r;
            ptr->draw();
            break;

            case 4:
            cout<<"\n\n\n\nExiting..\n";
            ch='n';
            break;
        }
    }
}