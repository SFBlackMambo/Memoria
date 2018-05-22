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

#endif // GAMELOOP_H_INCLUDED
