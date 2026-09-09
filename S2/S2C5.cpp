#include<iostream>
using namespace std;

class Arraysum {
    private:
     int arr[10];
     public:
     Arraysum(){
         cout<<"Enter 10 elements :";
         for (int i = 0; i<10; i++){
             cin>>arr[i];
     }
}
int findsum(){
    int sum = 0;
    for (int i = 0 ;i<10 ; i++){
        sum = sum + arr[i];
        
    }
    return sum;
}
};
int main(){
    Arraysum obj;
    cout << "sum"<<obj.findsum();
    return 0;
}
 
