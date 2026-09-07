#include<iostream>
using namespace std;

class Number{
    private:
    int num;
    public:
    void input(){
        cout<<"Enter a number";
        cin >> num;
        
    }
    bool isEven(){
        return num % 2 == 0;
    }
    void displayresult(){
        if(isEven())
        cout<<"The number is even ."<<endl;
        else
        cout << "The number is odd."
        << endl;
    
    }
};

       int main(){
           Number n;
           n.input();
           n.displayresult();
           return 0;
           
       }
