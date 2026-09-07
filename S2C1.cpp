#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int rollno;
    
    public:
    
    void setdata() {
        cout << "Enter name :";
        cin >> name;
        
        cout << "Enter roll number : ";
        cin >> rollno;
    }
    void displaydata() {
        cout <<"Student Details:"<<endl;
        cout <<"Name"<< name << endl;
        cout <<"Roll no"<<rollno<<endl;
    }
};
    int main() {
        Student s;
        
        s.setdata();
        s.displaydata();
        return 0;
    
    }
