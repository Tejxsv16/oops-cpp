#include<iostream>
using namespace std;
 
class Rectangle{
    private:
    int length;
    int breadth;
    
    public:
    void givedetails(){
        cout<<"enter length: ";
        cin>>length;
        cout<<"enter breadth: ";
        cin>>breadth;
    }
    int area(){
        return length*breadth;
        
    }
    void displaydetails(){
        cout<<"The area of the rectangle is :"<<area();
        
    }
};
int main(){
    Rectangle r;
    r.givedetails();
    r.displaydetails();
    return 0;

}
