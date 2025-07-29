// #include<iostream>
// using namespace std;

// //recursive function to find the sum of numbers from N to P where N is 5 and P is 3
// int P_bonacci(int N, int P) {
//     if (N < 0) {
//         return 0;
//     }

//     if (N < P) {
//         return 1;  
//     }

//     int ans = 0;
//     for (int i = 1; i <= P; i++) {
//         ans += P_bonacci(N - i, P);
//     }
//     return ans;
// }


// int main(){
//     int x, p, k;
//     cin>>p>>k;
//     int sum = P_bonacci(p, k);
//     cout<<sum;






//     return 0;
// }

#include <iostream>
using namespace std;

int P_bonacci(int N, int P, int depth, int n) {
    if (N < 0) {
        return 0;
    }

    if (N < P) {
        return 1;
    }

    int ans = 0;
    for (int i = 1; i <= P; i++) {
        ans += P_bonacci(N - i, P, depth, n);
        if (depth == n) {
            std::cout << N << " " << N - i << std::endl;
        }
    }
    return ans;
}

int main() {
    int N = 4;
    int P = 2;
    int n = 5;
    P_bonacci(N, P, 0, n);
    return 0;
}
