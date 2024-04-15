#include <18f4550.h>          //Libreria para usar el PIC18F4550
#fuses HS, NOPPROTECT, NOWRT, NOPUT, NOWDT, NOLVT      //Configuracion de fusibles-
#use delay (clock=12000000)                            //Fosc=12MHz.
#include <lcd.c>                                       //Incluye libreria de manejo del LCD.
#incluye<stdlib.h>                                     //Incluye libreria stdlib.h.
#BYTE port_b=0xF81                                     //Identificador para el puerto b en la localidad 0xF81.
#BYTE pord_d=0xF83                                     //Identificador para el puerto d en la localidad 0xF83.
int 1 i = 1;                                           //Contador ascendente i=1 descendente i=0;
signed int j;                                          //Variable indice para apuntar a los elementos del array.
int n;                                                 //Variable para repetir 25 vesces y generar 1s.
const int x[] =  [12, 15, 18      ]                    //Datos decodificadors del 0 al 9.                                  
