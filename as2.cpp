//define class bank

#include <iostream>
#include <random>
using namespace std;

class bank{
    private:
        double bal=0;
        string name,addr;
        int acno;
    public:
        void deposit();
        void withdraw();
        double checkbal();
        void kyc();
        void displaykyc();
};

void bank::deposit(){
    double a;
    cout<<"\nEnter the amount you want to deposit\n";
    cin>>a;
    bal+=a;
    cout<<"Amount successfully deposited\n";
}

void bank::withdraw(){
    double a;
    cout<<"\nEnter the amount you want to withdraw\n";
    cin>>a;
    if(bal-a<5000){
        cout<<"Insufficient funds\n";
        return;
    }
    bal-=a;
    cout<<"Amount successfully withdrawn\n";
}

double bank::checkbal(){
    return bal;
}

void bank::kyc(){
    cout<<"\nEnter your name\n";
    cin>>name;
    cout<<"enter your address\n";
    cin>>addr;
    acno=rand();
}

void bank::displaykyc(){
    cout<<"\nAcc no: "<<acno<<"\n";
    cout<<"name: "<<name<<"\n";
    cout<<"address: "<<addr<<"\n";
}

int main(){
    char ch='y';
    bank b1;
    while(ch!='n'){
        int cch;
        cout<<"\nEnter the action you want to perform \n1.Kyc\n2.Withdraw\n3.Deposit\n4.Checkbal\n5.Display Details\n6.Exit\n";
        cin>>cch;
        switch(cch){
            case 1:b1.kyc();
            break;
            case 2:b1.withdraw();
            break;
            case 3:b1.deposit();
            break;
            case 4:cout<<"\nBal :"<<b1.checkbal()<<"\n";
            break;
            case 5:b1.displaykyc();
            break;
            case 6:break;
        }
        cout<<"do you want to continue?(y/n)\n";
        cin>>ch;
    }
    return 0;
}