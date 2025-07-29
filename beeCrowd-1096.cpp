#include <iostream>
 
using namespace std;
 
int main() {
 
    int i = 1;
    for(; i<10; i+=2){
        int j = 7;
        for(int k = 0; k<3; k++){
            cout<<"I="<<i<<" J="<<j<<endl;
            j--;
        }
    }
 
    return 0;
}