#include<iostream>
using namespace std;

int main(){

    int num, sum; 
    cin >> num;
    unsigned long long arr[61];
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i<=61; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    for(int i = 0; i<num; i++){
        int input;
        cin>> input;
        cout<<"Fib("<<input<<") = "<<arr[input]<<"\n";
    }


    return 0;
}