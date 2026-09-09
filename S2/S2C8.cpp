#include<iostream>
using namespace std;
 class marks{
private:
int arr[5];
public:
marks(){
    for(int i = 0 ; i<5;i++){
        cin >> arr[i];
    }
}
void highest(){
    int max = arr[0];
    for(int i = 1;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"HIGHEST MARKS = "<<max;
}
 };
 int main(){
     marks m;
     m.highest();
     return 0;
     
 }
