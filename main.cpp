#include <iostream>

#include "Menu.h"
#include "controlConsola.h"
#include "cartas.h"


using namespace std;

int main()
{

     EstableceColor(BLANCO, PURPURA);

    //Esta función imprime el menú principal y las opciones de juego.
    MenuPrincipal();

    EstableceColor(BLANCO, ROJOCLARO);

    int opcion = seleccionMenu;

    switch(opcion){
        case 1: Gestion_Jugar(); break;
        case 2: /*instrucciones*/; break;
        case 3: /*Salir*/; break;



    return 0;
}

