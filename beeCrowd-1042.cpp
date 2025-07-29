// #include<iostream>
// using namespace std;

// int asending( int a, int b, int c){
//     if( a <= b && a <= c){
//         cout<<a<<endl;
//         if( b <= c){
//             cout<<b<<endl;
//             cout<<c<<endl;
//         }else{
//             cout<<c<<endl;
//             cout<<b<<endl;
//         }
//     }else if( b <= a && b <= c){
//         cout<<b<<endl;
//         if( a <= c){
//             cout<<a<<endl;
//             cout<<c<<endl;
//         }else{
//             cout<<c<<endl;
//             cout<<a<<endl;
//         }
//     }else{
//         cout<<c<<endl;
//         if( a <= b){
//             cout<<a<<endl;
//             cout<<b<<endl;
//         }else{
//             cout<<b<<endl;
//             cout<<a<<endl; 
//         }
//     }
// }


 
// int main() {
//     int num1, num2, num3;
//     cin >> num1 >> num2 >> num3;
//     asending(num1, num2, num3);
//     cout<<endl<<num1<<endl<<num2<<endl<<num3<<endl;
    
//     return 0;
// }


//In the above code it says that time limit exceeded

#include<iostream>
using namespace std;


int main() {
    int num1, num2, num3, temp;
    int arr[3];
    cin >> num1 >> num2 >> num3;
    arr[0] = num1;
    arr[1] = num2;
    arr[2] = num3;
    for(int i = 0 ; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i] < arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl;
    cout<<num1<<endl<<num2<<endl<<num3<<endl;
    
    return 0;
}