#include <bits/stdc++.h>
#include <bitset>

using namespace std;

int main()
{
    int test;
    cin >> test;
    int a, b;
    int arr[22][2];
    while (test--)
    {
        for (int i = 0; i < 22; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }
        int maxSum = -1; 
        int maxIndex = -1;

        for (int i = 0; i < 22; ++i)
        {
            int currentSum = arr[i][0] + (arr[i][1]*20);

            
            if (arr[i][0] > 0 && arr[i][1] > 0 && currentSum > maxSum)
            {
                maxSum = currentSum;
                maxIndex = i-1;
            }
        }

        cout<< maxIndex <<endl;
    }

    return 0;
}
