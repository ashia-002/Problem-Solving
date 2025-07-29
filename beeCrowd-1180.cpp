#include <iostream>

using namespace std;

int main()
{

    int N, indax = 0;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int value = arr[0];
    
    for (int j = 0; j < N; j++)
    {
        if (arr[j] < arr[indax])
        {
            value = arr[j];
            indax = j;
        }
    }

    cout << "Menor valor: " << value << endl;
    cout << "Posicao: " << indax << endl;

    return 0;
}