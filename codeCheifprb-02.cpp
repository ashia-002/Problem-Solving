#include<bits/stdc++.h>
using namespace std;

int main() {
    int test, n;
    cin >> test;
    
    while(test--) {
        cin >> n;
        long int sum = 0;

        if(n <= 9) {
            sum = (n * 0.5) * (2 + (n - 1));
        } else {
            for(int i = 10; i <= n; i++) {
                int dig = 0;
                int T = i; 
                while(T > 0) {
                    dig += T % 10;
                    T /= 10;
                }
                sum += dig;
            }
            sum += 45;

        }

        cout<< sum << endl;
    }

    return 0;

}
