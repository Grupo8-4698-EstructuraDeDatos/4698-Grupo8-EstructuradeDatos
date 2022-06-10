#pragma once

#include <string>
#include "5Conversion.h"
using namespace std;

template <typename T, typename N>

    class IngresoDatos{
        private:

            char* dato; //Arreglo donde guardare la insercion de mis numeros
            Conversion<T,N> conversion; //Instancia de conversion para determinar y transformar enteros y flotantes
            void imprimirMensaje(string str){
                cout<< str <<endl;
            }

            //metodo pincipal

            char* leerSoloLong(string mensaje){

                imprimirMensaje(mensaje);
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int j = 0; //Iterador para la verifiacion del unico punto
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if(c >= '0' && c <= '9' ){
                        printf("%c", c);
                        dato[i] = c;
                        i++;

                    }else if(c == 8){ //Si el input es un back space

                        backspaceEnteros(&i, &j,  &c, mensaje); //Funcion para la tecla backspace
                    }       			     
                }

                dato[i]='\0';

                /*
                for(int o = 0; o < 10; o++)
                    cout<<dato[o];
                */

                return dato;
            }

            char* leerSoloLong(){
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int j = 0; //Iterador para la verifiacion del unico punto
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if(c >= '0' && c <= '9' ){
                        printf("%c", c);
                        dato[i] = c;
                        ++i;

                    }else if(c == 8){ //Si el input es un back space
                        backspaceEnteros(&i, &j,  &c); //Funcion para la tecla backspace

                    }   			     
                }

                dato[i]='\0';
                return dato;
            }

            char* leerSoloEnteros(string mensaje){
                imprimirMensaje(mensaje);
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int j = 0; //Iterador para la verifiacion del unico punto
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if(c >= '0' && c <= '9' ){
                        printf("%c", c);
                        dato[i] = c;
                        i++;

                    }else if(c == 8){ //Si el input es un back space

                        backspaceEnteros(&i, &j,  &c, mensaje); //Funcion para la tecla backspace
                    }       			     
                }

                dato[i]='\0';
                return dato;
            }

            char* leerSoloEnteros(){
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int j = 0; //Iterador para la verifiacion del unico punto
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if(c >= '0' && c <= '9' ){
                        printf("%c", c);
                        dato[i] = c;
                        ++i;

                    }else if(c == 8){ //Si el input es un back space
                        backspaceEnteros(&i, &j,  &c); //Funcion para la tecla backspace

                    }   			     
                }

                dato[i]='\0';
                return dato;
            }
            
            void backspaceEnteros(int* i, int* j, char* c, string mensaje){
                if(*c >= '0' && *c <= '9'){
                        if(*i != 0) --*i;
                    }else{
                        system("CLS"); //Limpio pantalla
                        imprimirMensaje(mensaje);
                        for(int p = 0; p < *i-1; p++){
                            printf("%c", dato[p]); //Imprimo de nuevo hasta el penultimo
                        }

                        if(*i != 0){ //Verifico que hay valores
                            dato[--*i]='\0'; //Borro valor
                        }
                    }
            }

            void backspaceEnteros(int* i, int* j, char* c){

                if(*c >= '0' && *c <= '9'){
                        if(*i != 0) --*i;
                }else{ 
                    system("CLS"); //Limpio pantalla
                    for(int p = 0; p < *i-1; p++){
                        printf("%c", dato[p]); //Imprimo de nuevo hasta el penultimo
                    }

                    if(*i != 0){ //Verifico que hay valores
                        dato[--*i]='\0'; //Borro valor
                    }
                }     
            }

            char* leerDatos(string mensaje){

                imprimirMensaje(mensaje);
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int j = 0; //Iterador para la verifiacion del unico punto
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if((c >= '0' && c <= '9') || c == 46 ){
                        
                        conversion.verificar(c); //Verifico por puntos ingresados
                    
                        unicoPunto( &j , &i, mensaje, &c); //Funcion de unico punto

                        i++;

                    }else if(c == 8){ //Si el input es un back space

                        backspace(&i, &j,  &c, mensaje); //Funcion para la tecla backspace
             
                    }       			     
                }

                dato[i]='\0';
                return dato;
            }

            char* leerDatos(){
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int j = 0; //Iterador para la verifiacion del unico punto
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if(c >= '0' && c <= '9' || c == 46){
                        conversion.verificar(c); //Verifico por puntos ingresados
                    
                        unicoPunto( &j , &i, "Ingrese de nuevo ", &c); //Funcion de unico punto

                        ++i;

                    }else if(c == 8){ //Si el input es un back space
                        backspace(&i, &j,  &c); //Funcion para la tecla backspace
                    }   			     
                }

                dato[i]='\0';
                return dato;
            }

            char* leerLetras(){
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){
                        printf("%c", c); //Imprimo el valor
                        dato[i] = c;
                        i++;
                    }else if(c == 8){ //Si el input es un back space
                        backspace(&i, &c); //Funcion para la tecla backspace

                    }else if(c == ' '){
                        printf(" ");
                        dato[i] = c;
                        i++;
                    }    			     
                }

                dato[i]='\0';
                return dato;
            }

            char* leerLetras(string mensaje){

                imprimirMensaje(mensaje);
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
                        printf("%c", c); //Imprimo el valor
                        dato[i] = c;
                        i++;
                    }else if(c == 8){ //Si el input es un back space
                        backspace(&i, &c, mensaje); //Funcion para la tecla backspace
                    }else if(c == ' '){
                        printf(" ");
                        dato[i] = c;
                        i++;
                    }       			     
                }

                dato[i]='\0';
                return dato;
            }

            char* leerMixto(string mensaje){
                imprimirMensaje(mensaje);
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int j = 0; //Iterador para la verifiacion del unico punto
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == 92 || c == 58){
                        printf("%c", c); //Imprimo el valor
                        dato[i] = c;
                        i++;
                    }else if(c == 8){ //Si el input es un back space
                        backspace(&i, &c, mensaje); //Funcion para la tecla backspace
                    }else if(c == ' '){
                        printf(" ");
                        dato[i] = c;
                        i++;
                    }else if((c >= '0' && c <= '9') || c == 46 ){
                        
                        conversion.verificar(c); //Verifico por puntos ingresados
                    
                        unicoPunto( &j , &i, mensaje, &c); //Funcion de unico punto
                        i++;
                    }       			     
                }

                dato[i]='\0';
                return dato;
            }

            char* leerMixto(){
                char c;  //Creo un caracter, con el que voy a recibir el cada input
                int j = 0; //Iterador para la verifiacion del unico punto
                int i = 0; //Iterador para terminar el bucle, y asignar el valor final como nulo

                while(c != 13){ //Bucle hasta que se presion la tecla ENTER
                    c=getch(); //Recibo el dato por teclado

                    if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == 92 || c == 58){
                        printf("%c", c); //Imprimo el valor
                        dato[i] = c;
                        i++;
                    }else if(c == 8){ //Si el input es un back space
                        backspace(&i, &c); //Funcion para la tecla backspace
                    }else if(c == ' '){
                        printf(" ");
                        dato[i] = c;
                        i++;
                    }else if(c >= '0' && c <= '9' || c == 46 ){
                        
                        conversion.verificar(c); //Verifico por puntos ingresados
                    
                        unicoPunto( &j , &i, &c); //Funcion de unico punto
                        i++;
                    }       			     
                }

                dato[i]='\0';
                return dato;
            }

            void backspace(int* i, int* j, char* c, string mensaje){

                if(*c >= '0' && *c <= '9'){
                if(*i != 0) --*i;
                }else{
                    system("CLS"); //Limpio pantalla
                    imprimirMensaje(mensaje);
                    for(int p = 0; p < *i-1; p++){
                        printf("%c", dato[p]); //Imprimo de nuevo hasta el penultimo
                    }

                    if(*i != 0){
                        if(dato[*i-1] == 46){ //Verifico si hubo un punto, para reiniciarlo en la cuenta
                            conversion.setVerificador(0);
                            *j = 0;
                        } //Verifico que hay valores
                        dato[--*i]='\0'; //Borro valor
                    }
                }
            }

            void backspace(int* i, int* j, char* c){

                    system("CLS"); //Limpio pantalla
                    for(int p = 0; p < *i-1; p++){
                        printf("%c", dato[p]); //Imprimo de nuevo hasta el penultimo
                    }

                    if(*i != 0){ 
                        if(dato[*i-1] == 46){ //Verifico si hubo un punto, para reiniciarlo en la cuenta
                            conversion.setVerificador(0);
                            *j = 0;
                        }//Verifico que hay valores
                        dato[--*i]='\0'; //Borro valor
                    }
                
            }

            void backspace(int* i, char* c, string mensaje){

                    system("CLS"); //Limpio pantalla
                    imprimirMensaje(mensaje);
                    for(int p = 0; p < *i-1; p++){
                        printf("%c", dato[p]); //Imprimo de nuevo hasta el penultimo
                    }

                    if(*i != 0){ 
                        dato[--*i]='\0'; //Borro valor
                    }
                
            }
          
            void backspace(int* i, char* c){

                if(*c >= 'a' && *c <= 'z' || *c >= 'A' && *c <= 'Z'){
                if(*i != 0) --*i;
                }else{ 
                    system("CLS"); //Limpio pantalla
                    for(int p = 0; p < *i-1; p++){
                        printf("%c", dato[p]); //Imprimo de nuevo hasta el penultimo
                    }

                    if(*i != 0){ 
                        dato[--*i]='\0'; //Borro valor
                        --*i; //Disminuto iterador
                    }
                }
            }

            void unicoPunto(int* j, int* i, string mensaje, char* c){
                if(conversion.getNumero()){ //Si el numero es flotante
                conversion.setVerificador(1); //Seteo, pues si tiene un punto, es flotante
                    if(*j==0){
                        printf("%c", *c); //Imprimo el valor
                        dato[*i] = *c;
                        ++*j; //Hago que J deje de ser 0, pues no puede haber mas de un solo punto
                    }else{ //!El usuario ingreso mas de un punto
                
                        system("CLS");
                        imprimirMensaje("Ha ingresado mas de un punto. Vuelva a intentarlo");
                        imprimirMensaje(mensaje);
                        for(int p = 0; p < *i; p++){
                            printf("%c", dato[p]);
                        }
                        --*i; //Para no avanzar en el contador e imprimir basura
                    }
                    }else{ //Si el dato no es un punto
                        printf("%c", *c);
                        dato[*i] = *c;
                    }
            }

            public:

            IngresoDatos(){
                this -> dato = new char[65]; //Creo un array para almacenar mis datos  
            }    

            ~IngresoDatos(){
                delete [] dato; //Lo libero
            }   

            void funcionPrincipal(string mensaje){
                N real = funcionPrincipalFlotantes(mensaje);
                if(this -> conversion.getVerificador() == 1){
                    cout << "\nSu numero es "<< real << " y es un flotante" <<endl; //Imprimo flotante
                }else{
                    int entero = real;
                    cout << "\nSu numero es "<< real << " y es un entero" <<endl; //Imprimo entero
                }
            }    

            void funcionPrincipal(){

                N real = funcionPrincipalFlotantes();

                if(this -> conversion.getVerificador() == 1){
                    cout << "\nSu numero es "<< real << " y es un flotante" <<endl; //Imprimo flotante
                }else{
                    int entero = real;
                    cout << "\nSu numero es "<< real<< " y es un entero" <<endl; //Imprimo entero
                }
            }   
            
            N funcionPrincipalFlotantes(string mensaje){

                char *aux = leerDatos(mensaje);
                if(aux[0] != '\0' && aux[0] != 46){
                    return this -> conversion.numFloat(aux);
                }else if(aux[0] == 46){
                    cout<<"\n~~ Un flotante no inicia con un punto solo ~~\n"<<endl;
                    return -1;
                }else{
                    cout<<"\n~~ Datos vacios ~~\n"<<endl;
                    return -1;
                }

            }

            N funcionPrincipalFlotantes(){

                char *aux = leerDatos();
                if(aux[0] != '\0' && aux[0] != 46){
                    return this -> conversion.numFloat(aux);
                }else if(aux[0] == 46){
                    cout<<"\n~~ Un flotante no inicia con un punto solo ~~\n"<<endl;
                    return -1;
                }else{
                    cout<<"\n~~ Datos vacios ~~\n"<<endl;
                    return -1;
                }
              
            } 

            unsigned long funcionPrincipalLong(){

                char *aux = leerSoloLong();
                if(aux[0] != '\0'){
                    return this -> conversion.numLong(aux);
                }else{
                    cout<<"\n~~ Datos vacios ~~\n"<<endl;
                    return -1;
                }
            }

            unsigned long funcionPrincipalLong(string mensaje){

                char *aux = leerSoloLong(mensaje);

                /*
                for(int i = 0; i < 10; i++){
                    cout<< aux[i] << " "<<endl;
                }
                */

                if(aux[0] != '\0'){
                    //cout<< conversion.numLong(aux) <<endl;
                    return this -> conversion.numLong(aux);
                }else{
                    cout<<"\n~~ Datos vacios ~~\n"<<endl;
                    return -1;
                }
            }

            T funcionPrincipalEnteros(){

                char *aux = leerSoloEnteros();
                if(aux[0] != '\0'){
                    return this -> conversion.numInt(aux);
                }else{
                    cout<<"\n~~ Datos vacios ~~\n"<<endl;
                    return -1;
                }
            }

            T funcionPrincipalEnteros(string mensaje){

                char *aux = leerSoloEnteros(mensaje);
                if(aux[0] != '\0'){
                    return this -> conversion.numInt(aux);
                }else{
                    cout<<"\n~~ Datos vacios ~~\n"<<endl;
                    return -1;
                }
                
            }

            char* funcionLetras(string mensaje){
                return leerLetras(mensaje);
            }

            char* funcionLetras(){
                return leerLetras();
            }

            char* funcionMixta(){
                return leerMixto();
            }

            char* funcionMixta(string mensaje){
                return leerMixto(mensaje);
            }

            void funcionPrincipalLetras(string mensaje){
                cout << leerLetras(mensaje)<<endl;
            }

            void funcionPrincipalLetras(){
                cout << leerLetras()<<endl;
            }
            
};
