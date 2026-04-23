#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class student{

private:
int rollno;
string name;
float marks;

public:
void setdata(int roll,string n,float m)
{
rollno=roll;
name=n;
marks=m;
}

void display()
{
cout<<"Roll no: "<<rollno<<" Name: "<<name<<" Marks: "<<marks<<endl;
}

void writedata(ofstream & outfile)
{
outfile<<rollno<<" "<<name<<" "<<marks<<endl;
}
};

int main()
{
student s[60];
int count=0;

ifstream infile("studentdata.txt");

if(!infile)
{
cout<<"Error opening file"<<endl;
return 0;
}

int roll;
string name;
float marks;

while(infile>>roll>>name>>marks)
{
s[count].setdata(roll,name,marks);
count++;
}

infile.close();

cout<<"Student Records\n";

for(int i=0;i<count;i++)
{
s[i].display();
}

ofstream outfile("student_data_output.txt");

for(int i=0;i<count;i++)
{
s[i].writedata(outfile);
}

outfile.close();

cout<<"\nData successfully written to student_output.txt";

return 0;
}
