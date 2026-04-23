#include <iostream>
using namespace std;

class shape{
protected:
    int side1, side2;

public:
    void accept(int ch){
        if(ch==1){
            cout<<"Enter length: ";
            cin>>side1;

            cout<<"Enter breadth: ";
            cin>>side2;
        }
        else{
            cout<<"Enter radius: ";
            cin>>side1;
        }
    }

    virtual void area()=0;
    virtual void perimeter()=0;
};

class rectangle: public shape{
public:
    void area(){
        cout<<"Area of rectangle is: "<<side1*side2<<endl;
    }

    void perimeter(){
        cout<<"Perimeter of rectangle is: "<<2*(side1+side2)<<endl;
    }
};

class circle: public shape{
public:
    void area(){
        cout<<"Area of circle is: "<<3.14*side1*side1<<endl;
    }

    void perimeter(){
        cout<<"Perimeter of circle is: "<<2*3.14*side1<<endl;
    }
};

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
