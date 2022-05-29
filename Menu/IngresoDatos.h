#ifndef INGRESODATOS_H
#define INGRESODATOS_H
#include <string>
using namespace std;
#include "Conversion.h"

class IngresoDatos{
    private:
        char* dato; //Arreglo donde guardare la insercion de mis numeros
        Conversion conversion; //Instancia de conversion para determinar y transformar enteros y flotantes
        void imprimirMensaje(string);

    public:
        IngresoDatos();   //Constructor
        ~IngresoDatos();       //Destructor

        //metodo pincipal
        char* leerDatos(string);
        char* leerDatos();
        int funcionPrincipal(string);
        //Metodo sobrecargado
        int funcionPrincipal();
        void unicoPunto(int*, int*, string, char*);
        void backspace(int*, int*, char*, string);
        //Metodo sobrecargado
        void backspace(int*, int*, char*);
};

#endif  
