#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float n1, n2, n3, n4, n5;
    cin >> n1 >> n2 >> n3 >> n4;
    float avarage = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / (float)(2 + 3 + 4 + 1);
    cout << "Media: " << fixed << setprecision(1) << avarage << endl;
    if (avarage >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (avarage < 5.0)
    {
        cout << "Aluno reprovado." << endl;
    }
    else if (5.0 <= avarage && avarage < 6.9)
    {
        cout << "Aluno em exame." << endl;
        cin >> n5;
        cout << "Nota do exame: "<< fixed << setprecision(1) << n5 <<endl;
        
        float recal = (avarage + n5) / 2.0;
        if (recal >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << fixed << setprecision(1) << recal << endl;
        }
        else if (recal <= 4.9)
        {
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << fixed << setprecision(1) << recal << endl;
        }
    }

    return 0;
}