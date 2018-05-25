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
*     @param x posici�n en lo ancho que se desea
*
*     @param y posici�n en lo alto  que se desea
*/
void gotoxy(short x,short y);
//-----------------------------------------------------------------------------------------------------------------------------------------------------


/** @brief Mueve el cursor de selecci�n en x de la carta durante el juego.
 *
 * @param x Es la posici�n en x donde se va a imprimir inicialmente el cursor.
 *
 * @param y Es la posici�n en y donde se va a imprimir inicialmente el cursor.
 *
 * @param dificultad Es la variable que inidca el tama�o del tablero.
 *
 * @param direccion Es la variable que indica en que direcci�n va el cursor horizontalmente.
*/
void MoverPosicionTablero_Horizontal(int &x, int y, int dificultad, int direccion);

//-----------------------------------------------------------------------------------------------------------------------------------------------------


//-----------------------------------------------------------------------------------------------------------------------------------------------------

/** @brief Mueve el cursor de selecci�n en y de la carta durante el juego.
 *
 * @param x Es la posici�n en x donde se va a imprimir inicialmente el cursor.
 *
 * @param y Es la posici�n en y donde se va a imprimir inicialmente el cursor.
 *
 * @param dificultad Es la variable que inidca el tama�o del tablero.
 *
 * @param direccion Es la variable que indica en que direcci�n va el cursor verticalmente.
*/
void MoverPosicionTablero_Vertical(int x, int &y, int dificultad, int direccion);

//-------------------------------------------------------------------------------------------------------------------------------------------------------

#endif // CONTROLCONSOLA_H_INCLUDED
