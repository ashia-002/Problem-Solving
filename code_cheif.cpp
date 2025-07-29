#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){

    //7 4 3 2 6 
    // e + e = e
    //e + o = o
    // o + o = o
    int test;
    cin>>test;
    while(test--){
        int n, odd_num = 0;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            if(arr[i] %2 != 0){
                odd_num++;
            }
        }
        if(odd_num %2 != 0 && n>1){
            cout<<"2" <<endl;
        }else{
            cout<<"1"<<endl;
        }
    }


    return 0;
}