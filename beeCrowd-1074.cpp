// #include <iostream>
 
// using namespace std;
 
// int main() {
 
//     int N,x;
//     cin>>N;
//     for(int i = 0; i<N; i++){
//         cin>>x;
//         if(x%2 == 0 && x>0){
//             cout<<"EVEN POSITIVE"<<endl;
//         }else if(x%2 == 0 && x<0){
//             cout<<"EVEN NEGATIVE"<<endl;
//         }else if(x%2 != 0 && x>0){
//             cout<<"ODD POSITIVE"<<endl;
//         }else if(x%2 != 0 && x<0){
//             cout<<"ODD NEGATIVE"<<endl;
//         }else{
//             cout<<"NULL"<<endl;
//         }
//     }
 
//     return 0;
// }



//*********************beeCrowd-1075*********************
#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    cin>>N;
    for(int i = 1; i<100; i++){
        if(i%N == 2){
            cout<<i<<endl;
        }
    }
 
    return 0;
}