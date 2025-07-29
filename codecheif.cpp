#include <bits/stdc++.h>
using namespace std;

bool contains_101(int n) {
    bitset<32> binaryRepresentation(n);

    string binary = binaryRepresentation.to_string();
    return binary.find("101") != string::npos;
}

int main() {
    int test;
    cin >> test;

    while (test--) {
        int n;
        cin >> n;

        int operations = 0;
        while (!contains_101(n)) {
            int x = 1;
            n = n + (pow(2, x));  
            operations++;
        }

        cout << operations << endl;
    }

    return 0;
}
