#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    int dn, mn, an, da, ma, aa,edad;
    cout << "\nFecha de nacimiento:\n";
    cout << "\nDia: ";
    cin >> dn;
    cout << "\nMes: ";
    cin >> mn;
    cout << "\nAnio: ";
    cin >> an;

    cout << "\nFecha actual:\n";
    cout << "\nDia: ";
    cin >> da;
    cout << "\nMes: ";
    cin >> ma;
    cout << "\nAnio: ";
    cin >> aa;
                                          
    edad = aa - an;


    
    system("pause");
}
