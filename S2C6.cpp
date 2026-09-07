#include <iostream>
using namespace std;
class text {
    private :
    string str;
    public:
    text(string s){
        str = s;
    }
    int findlength(){
        int count = 0;
        while(str[count]){
            count ++;
        
        }
        return count;
    }
};
int main(){
    text t("PARYANSH");
    cout<< "length ="<< t.findlength();
    return 0;
    
}
