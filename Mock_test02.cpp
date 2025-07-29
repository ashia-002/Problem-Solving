// #include <iostream>
// using namespace std;

// void P_bonacci(int N, int P, int depth, int n) {
//     if (N < 0 || N < P) {
//         return;
//     }

//     int L;

//     if (depth == n) {
//         cout << N << " " << N - P << endl;
//         return;
//     }

//     for (int i = 1; i <= P; i++) {
//         L = N - i;
//         P_bonacci(L, P, depth + 1, n);
//     }
// }

// int main() {
//     int N = 4;
//     int P = 2;
//     int n = 5;
//     P_bonacci(N, P, 0, n);
//     return 0;
// }

#include <iostream>
using namespace std;

void P_bonacci(int N, int P, int depth, int n)
{
    if (N < 0 || N < P || depth > n)
    { // base case
        return;
    }

    int L;

    for (int i = 1; i <= P; i++)
    {
        L = N - i;
        P_bonacci(L, P, depth + 1, n);
        if (depth == n)
        {
            cout << N << " " << L << endl;
            return;
        }
    }
}

int main()
{
    int N = 4;
    int P = 2;
    int n = 5;
    P_bonacci(N, P, 0, n);
    return 0;
}
