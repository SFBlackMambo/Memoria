#ifndef CARTASMARCOS_H_INCLUDED
#define CARTASMARCOS_H_INCLUDED

/** @brief Imprime el frente de la carta seleccionada.
 *
 * @param ancho Es la variable que indica el ancho de la carta.
 *
 * @param alto Es la variable que indica el alto de la carta.
 *
 * @param x Es la posici�n en x donde se va a imprimir inicialmente la carta.
 *
 * @param y Es la posici�n en y donde se va a imprimir inicialmente la carta.
*/
void MostrarCarta(int ancho, int alto, int x, int y);

//-------------------------------------------------------------------------------------------------------------------------

/** @brief Imprime la parte de atras de la carta.
 *
 * @param ancho Es la variable que indica el ancho de la carta.
 *
 * @param alto Es la variable que indica el alto de la carta.
 *
 * @param x Es la posici�n en x donde se va a imprimir inicialmente la carta.
 *
 * @param y Es la posici�n en y donde se va a imprimir inicialmente la carta.
*/
void ImprimeCartaVolteada(int ancho, int alto, int x, int y);

//-------------------------------------------------------------------------------------------------------------------------

/** @brief Mezcla el arreglo unidimensional donde se representan las cartas.
 *
 * @param A Es el arreglo unidimensionl donde estan las representaciones de las cartas.
 *
 * @param n Es el tama�o del arreglo.
*/
void BarajarCartas(int A[], int n);

//-------------------------------------------------------------------------------------------------------------------------

/** @brief Borra el marco que muestra el que se esta seleccionando en pantalla.
 *
 * @param ancho Es la variable que indica el ancho de la selecci�n.
 *
 * @param alto Es la variable que indica el alto de la selecci�n.
 *
 * @param x Es la posici�n en x donde se va a imprimir inicialmente la selecci�n.
 *
 * @param y Es la posici�n en y donde se va a imprimir inicialmente la selecci�n.
*/
void BorraMarco(int ancho, int alto, int x, int y);

//-------------------------------------------------------------------------------------------------------------------------

/** @brief Imprime el marco que muestra que se esta seleccionando en pantalla.
 *
 * @param ancho Es la variable que indica el ancho de la selecci�n.
 *
 * @param alto Es la variable que indica el alto de la selecci�n.
 *
 * @param x Es la posici�n en x donde se va a imprimir inicialmente la selecci�n.
 *
 * @param y Es la posici�n en y donde se va a imprimir inicialmente la selecci�n.
*/
void ImprimeMarco(int ancho, int alto, int x, int y);


#endif // CARTASMARCOS_H_INCLUDED
