#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
#include "t2ConversionInt.h"

//Constructor

ConversionInt::ConversionInt(){
}

//Definicion de metodos

bool ConversionInt::convertir(char c){
    if (c == 46){
        return false;
    }else{
        return true;
    }
}

int ConversionInt::numInt(char* dato){
    return atoi(dato);
}
