#ifndef AYUDAFONETICASP_H
#define AYUDAFONETICASP_H

#include <iostream>
using namespace std;

class AyudaFoneticaSP
{
    private:
        int filas;
        int columnas;
        char** matriz;

        int cantPalabrasABuscar;
        string *palabrasABuscar;
        // coincide con el indice de cada palabra
        char* letraDeMayorImportancia;

        //cada palabra a buscar arreglada foneticamente
        string *palabrasABuscarArregladas;

        /*
        * Primer paso
        **/
        void guardarMayorImportancia()
        {
            int i;
            for(i=0;i<cantPalabrasABuscar;i++){
                letraDeMayorImportancia[i] = palabrasABuscar[i].at(0);
            }
        }
        /*
        * Segundo paso
        **/
        void eliminarCaracteres(string palabra)
        {
            int i;
            for(i=0; i< palabra.length() ; i++){
                if(palabra.at(i) == 'A' ){

                }
            }
        }
        /*
        * tercer paso
        **/
        void reemplazarLetrasPorNumeros();
        /*
        * Cuarto paso
        **/
        void unirValoresNumericosConLetras();




        void eliminarRepetidos();

    public:
        /*
        * Quinto paso
        **/
        void unirNumerosConsecutivos(string palabra){
            string apuntador;
            string salida = "";
            string aux;
            apuntador = palabra.at(0);
            salida= salida + (string) apuntador;
            int i;
            for(i=1; i< palabra.length() ; i++){
                aux = palabra.at(i);
                if(apuntador != aux ){
                    apuntador = palabra.at(i);
                    salida.insert(salida.end(), palabra.at(i));
                }
            }
            cout << salida;
        }
        /*
        * Sexto paso
        **/
        void letraYPrimerosNumeros(string palabra){
            if(palabra.length()>=4){
                palabra = palabra.substr(0,4);
            }else{
                int dif = 4 - palabra.length();
                int i;
                for(i=0;i<dif;i++){
                    palabra = palabra + "0";
                }
            }
            cout << palabra;
        }
        /*
        * Todas en horizontal
        **/
        void palabrasHorizontal(string **arr,int lengX,int lengY){
            int i,j,aux;

            string *salida = new string[lengX*lengY];
            for(i=0;i<lengY;i++){
                for(j=0;j<lengX;j++){
                    if(i==0){
                        for(aux=j;aux<lengX;aux++){
                            salida[aux]=salida[aux]+arr[i][j];
                        }
                    }else{
                        for(aux=j+(lengX*(i));aux<lengX*(i+1);aux++){
                            salida[aux]=salida[aux]+arr[i][j];
                        }
                    }


                }
            }
            for(i=0;i<lengX*lengY;i++){
                cout << salida[i] << endl;
            }
        }
        /*
        * Tomar palabra por indice
        **/
        void tomarPalabraPorIndice(char **arr,int lengX,int lengY,int posX,int posY){
            int i;
            string* salida = new string[4];
            cout<< arr[posX][posY] << endl;
            //horizontal izquierda
            for(i=posX;i>=0;i--){
                salida[0] = salida[0] + arr[posY][i];
            }
            //horizontal derecha
            for(i=posX;i<lengX;i++){
                salida[1] = salida[1] + arr[posY][i];
            }
            //vertical arriba
            for(i=posY;i>=0;i--){
                salida[2] = salida[2] + arr[i][posX];
            }
            //vertical abajo
            for(i=posY;i<lengY;i++){
                salida[3] = salida[3] + arr[i][posX];
            }
            for(i=0;i<4;i++){
                cout << i << ")" <<salida[i] << endl;
            }
        }
        /** Default constructor */
//        AyudaFoneticaSP(int filas, int columnas, char** matriz, int cantPalabrasABuscar, string* palabrasABuscar){
//            this->filas = filas;
//            this->columnas = columnas;
//            this->matriz = matriz;
//            this->cantPalabrasABuscar = cantPalabrasABuscar;
//            this->palabrasABuscar = palabrasABuscar;
//        }
//        AyudaFoneticaSP(){}
        /** Default destructor */
//        virtual ~AyudaFoneticaSP();

        void realizarBusqueda();

};



#endif // AYUDAFONETICASP_H
