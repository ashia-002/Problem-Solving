#include <iostream>

using namespace std;

int main()
{

    int num, alcool = 0, gasolina = 0, diesel = 0;
    
    // if(num != 1 || num != 2 || num != 3){
    //     cin>>num;
    // }
    while ( num != 4)
    {
        cin>>num;
        switch (num)
        {
        case 1:
            alcool += 1;
            break;
        case 2:
            gasolina += 1;
            break;
        case 3:
            diesel += 1;
            break;
        default:
            //cin >> num;
            break;
        }
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;


    return 0;
}