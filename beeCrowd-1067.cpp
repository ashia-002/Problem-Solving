// #include <iostream>
 
// using namespace std;
 
// int main() {
    
//     int x;
//     cin>>x;
//     for(int i = 1; i<=x; i++){
//         if(i%2 != 0){
//             cout<<i<<endl;
//         }
//     }
 
//     return 0;
// }


//**************beeCrowd-
#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, y, sum = 0;
    cin >> x >> y;
    
    if (x > y) {
        int z = x;
        x = y;
        y = z;
    }
    // if(x<0){
    //     x-=(x*2);
    // }
    // if(y<0){
    //     y-=(y*2);
    // }
    for (int i = x+1; i < y; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    
    cout << sum << endl;
 
    return 0;
}
