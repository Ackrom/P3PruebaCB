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
