#include <iostream>
#include "AyudaFoneticaSP.hpp"


using namespace std;

int main()
{
    char **arr = new char*[3];
    int i,j;
    for(i=0;i<3;i++){
        arr[i] = new char[3];
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin >> arr[i][j];
            cout << arr[i][j];
        }
        cout << endl;
    }


    AyudaFoneticaSP SP;
    SP.tomarPalabraPorIndice(arr,3,3,1,1);
    //SP.palabrasHorizontal(arr,5,5);
    //SP.unirNumerosConsecutivos("p222233322223333");
    //SP.letraYPrimerosNumeros("ff");
//    int fila, columna;
//    int i;
//    cin>> fila >>columna;
//
//    char** matriz = new char* [fila];
//    for(i=0;i<fila;i++){
//        matriz[i] = new char[columna];
//    }
//
//    string* h = new string[fila];
//    for(i=0;i<fila;i++){
//        cin >>h[i];
//    }
//    cout<<endl;
//    h[0];
//    for(i=0;i<fila;i++){
//        cout<< h[i] <<"  ";
//    }


    //AyudaFoneticaSP SP = new AyudaFoneticaSP(fila, columna, matriz);

    return 0;
}
