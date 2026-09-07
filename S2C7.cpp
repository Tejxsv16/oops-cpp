#include<iostream>
using namespace std;

class employee{
    string employeename;
    double basicsalary;
    
    public:
    employee(){
        cout<<"Enter employee name:";
        getline(cin,employeename);
        cout<<"Enter basic salary: ";
        cin>>basicsalary;
    }
    double calculateHRA(){return 0.2*basicsalary;}
    double calculateDA(){return 0.1*basicsalary;}
    void displaygrosssalary(){
        cout<<"The gross salary is:";

cout<<(basicsalary + calculateDA() + calculateHRA()) << endl;    }
};
int main(){
    employee e;
    e.displaygrosssalary();
    return 0;
    
}
