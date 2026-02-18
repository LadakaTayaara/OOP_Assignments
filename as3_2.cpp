#include <iostream>
using namespace std;

class Point{
    private:
    int x,y;
    public:

    Point(){
        x=0;
        y=0;
    }

    Point(int a,int b){
        x=a;
        y=b;
    }

    ~Point(){
        cout<<" ";
    };

    int add(int x,int y){
        return x+y;
    }

    int sub(int x,int y){
        return x-y;
    }

    int mul(int x,int y){
        return x*y;
    }

    void add(Point &p1,Point &p2){
        p1.x+=p2.x;
        p1.y+=p2.y;
    }

    void sub(Point &p1,Point &p2){
        p1.x-=p2.x;
        p1.y-=p2.y;
    }

    void mul(Point &p1,Point &p2){
        p1.x*=p2.x;
        p1.y*=p2.y;
    }

    void display(Point &p){
        cout<<"X Coordinate: "<<p.x<<"\nY coordinate: "<<p.y<<endl;
    }
};

int main(){
    int x,y;
    cout<<"enter the values of x and y\n";
    cin>>x>>y;
    Point p;
    cout<<"Addition: "<<p.add(x,y)<<"\nSubtraction: "<<p.sub(x,y)<<"\nMultiplication: "<<p.mul(x,y)<<endl;

    int a,b,c,d;
    cout<<"\nEnter values of x1,y1 and x2,y2\n";
    cin>>a>>b>>c>>d;
    Point p1(a,b),p2(c,d);

    p.add(p1,p2);
    cout<<"\nAddition:";
    p.display(p1);

    Point p3(a,b),p4(c,d);

    p.sub(p3,p4);
    cout<<"\nSubtraction\n";
    p.display(p3);

    Point p5(a,b),p6(c,d);

    p.mul(p5,p6);
    cout<<"\nMultiplication:\n";
    p.display(p5);

    return 0;
}