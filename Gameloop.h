#ifndef GAMELOOP_H_INCLUDED
#define GAMELOOP_H_INCLUDED
//------------------------------------------------------------------------------------------------------------------
enum EleccionUsuario{JUGAR = 1, VER_INSTRUCCIONES, SALIR};
//-----------------------------------------------------------------------------------------------------------------------------------------------------


/** @brief gameloop
*
*/
void Gestion_Jugar();

/** @brief Funcion que captura el nombre
*
*
*
*
*/
void ElegirNombresJugadores(char J1[], char J2[]);

//-------------------------------------------------------------------------------------------------------------------------------
/** @brief Selecciona el tamaño del tablero.
 *
 * @param dificultad Es la variable que indica el tamaño del tablero.
 *
 * @param marcador1 Es la variable que guarda la cantidad de puntos del primer jugador.
 *
 * @param marcador2 Es la variable que guarda la cantidad de puntos del segundo jugador.
*/
void Tablero(int dificultad, int &marcador1, int &marcador2);

//-----------------------------------------------------------------------------------------------------------------------------------------------------
/** @brief Genera el arreglo bidimensional que simula el tablero ya con las cartas.
 *
 * @param Tablero Es el arreglo bidimensional donde se van a guardar las cartas
 *
 * @param renTablero Es la variable con el número de renglones del tablero.
 *
 * @param MazoCartas Es el arreglo unidimensional donde estan las cartas.
*/
void GeneraTablero(int Tablero[][10], int renTablero, int MazoCartas[]);


/** @brief Imprime el puntaje de los jugadores.
 *
 * @param marcador Es la variable del puntaje de los jugadores.
 *
 * @param jugador Es la variable que idica al jugador 1 o 2.
*/
void ImprimeMarcador(int &marcador, int jugador);




#endif // GAMELOOP_H_INCLUDED
