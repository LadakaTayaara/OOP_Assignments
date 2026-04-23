#include<iostream>   
#include<fstream>    // for file handling (ifstream, ofstream)
#include<string>     
using namespace std;

// Class to store student information
class student{

private:
int rollno;    
string name;    
float marks;   

public:
// Function to set student data
void setdata(int roll,string n,float m)
{
rollno=roll;  
name=n;      
marks=m;      
}

// Function to display student data on screen
void display()
{
cout<<"Roll no: "<<rollno<<" Name: "<<name<<" Marks: "<<marks<<endl;
}

// Function to write student data into file
void writedata(ofstream & outfile)
{
outfile<<rollno<<" "<<name<<" "<<marks<<endl;
}
};

int main()
{
student s[60];   // array of student objects
int count=0;     // to count number of students

// Open input file for reading
ifstream infile("studentdata.txt");

// Check if file opened successfully
if(!infile)
{
cout<<"Error opening file"<<endl;
return 0;  
}

// Temporary variables to read data from file
int roll;
string name;
float marks;

// Read data from file until 
while(infile>>roll>>name>>marks)
{
s[count].setdata(roll,name,marks); // store data in object
count++;                           // move to next object
}

infile.close();   // close input file after reading

cout<<"Student Records\n";

// Display all student records
for(int i=0;i<count;i++)
{
s[i].display();
}

// Open output file for writing
ofstream outfile("student_data_output.txt");

// Write all student data to output file (from objects)
for(int i=0;i<count;i++)
{
s[i].writedata(outfile);
}

outfile.close();   // close output file

// Display success message
cout<<"\nData successfully written to student_output.txt";

return 0;   // end of program
}
