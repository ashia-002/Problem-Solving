#include<iostream>
using namespace std;

int main(){
    int N, sheep, sum = 0;
    int arr[N];
    for(int i = 0; i<N; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i = 0; i<N; i++){
        
        sheep++;
        if(arr[i]%2 == 0){
            sheep++;
            N=i;
            break;
        }
    }
    for(int j = i; i>0; i--){
        if(arr[j] %2 != 0 && arr[j] != 0){
            sheep++;
        }
    }

    cout<<N<<endl;
    cout<<sum-sheep<<endl;


    return 0;
}