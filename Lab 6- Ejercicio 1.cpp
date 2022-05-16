#include <iostream>

#include <cstdlib>



using namespace std;



int lado;

int resultado;

int opcion;



int main(){

    cout << "Desea calcular el area[1] o el perimetro [2]" << endl;

    cin >> opcion;



    if(opcion==1){

    cout << "Ingrese la medida de un lado del cadrado" << endl;

    cin >> lado; 

    resultado=lado*lado; 

    cout << "El area de su cuadrado es: " << resultado << endl;



    }



    else if (opcion==2){

    cout << "Ingrese la medida de un lado del cadrado" << endl;

    cin >> lado; 

    resultado=lado*4;

    cout << "El perimetro de su cuadrado es: " << resultado << endl;



    }





system("pause");

return 0;

}
