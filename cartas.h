#ifndef CARTAS_H_INCLUDED
#define CARTAS_H_INCLUDED

/** @brief Imprime un marco en una posic�on dada, de un tama�o seleccionado
*
*   @param ancho Lo ancho que sera el marco
*
*   @param alto Lo alto que sera el marco
*
*   @param x la posic�on de la esquina del marco
*
*   @param y La posic�on de la esquina del marco
*/
void ImprimeMarco(int ancho, int alto, int x, int y);

//--------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------------------------
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

//----------------------------------------------------------------------------------------------------------------------------------
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

//------------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------------------------
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

//-----------------------------------------------------------------------------------------------------------------------------------
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

#endif // CARTAS_H_INCLUDED
