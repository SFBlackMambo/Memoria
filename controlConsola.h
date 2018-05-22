#ifndef CONTROLCONSOLA_H_INCLUDED
#define CONTROLCONSOLA_H_INCLUDED
//-----------------------------------------------------------------------------------------------------------------------------------------------------

enum miColor{
    NEGRO,
    AZUL,
    VERDE,
    AGUAMARINA,
    ROJO,
    PURPURA,
    AMARILLO,
    GRISCLARO,
    GRIS,
    AZULCLARO,
    VERDECLARO,
    AGUAMARINACLARO,
    ROJOCLARO,
    PURPURACLARO,
    AMARILLOCLARO,
    BLANCO
};
//-----------------------------------------------------------------------------------------------------------------------------------------------------



/**
* @brief Funcion que cambiara el color de la consola en los deseados por el usuario
*
* @param colorFondo  El color del cual se pintara el fondo de la consola
*
* @param colorTexto   El color del cual se pintaran los caracteres en la consola
*/
void EstableceColor(int colorFondo, int colorTexto);

//-----------------------------------------------------------------------------------------------------------------------------------------------------
/**  @brief Funcion que mue ve el cursos a las posiciones dadas por "x" y "y"
*
*     @param x posición en lo ancho que se desea
*
*     @param y posición en lo alto  que se desea
*/
void gotoxy(short x,short y);
//-----------------------------------------------------------------------------------------------------------------------------------------------------


#endif // CONTROLCONSOLA_H_INCLUDED
