/** @brief Selecciona el tamaño del tablero.
 *
 * @param dificultad Es la variable que indica el tamaño del tablero.
 *
 * @param marcador1 Es la variable que guarda la cantidad de puntos del primer jugador.
 *
 * @param marcador2 Es la variable que guarda la cantidad de puntos del segundo jugador.
*/
void Tablero(int dificultad, int &marcador1, int &marcador2)
{
    switch (dificultad){
        case PRINCIPIANTE: Juego_Principiante(marcador1, marcador2); break;
        case INTERMEDIO: Juego_Intermedio(marcador1, marcador2); break;
        case EXPERTO: Juego_Experto(marcador1, marcador2); break;
    }
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------
/** @brief Genera el arreglo bidimensional que simula el tablero ya con las cartas.
 *
 * @param Tablero Es el arreglo bidimensional donde se van a guardar las cartas
 *
 * @param renTablero Es la variable con el número de renglones del tablero.
 *
 * @param MazoCartas Es el arreglo unidimensional donde estan las cartas.
*/
void GeneraTablero(int Tablero[][10], int renTablero, int MazoCartas[])
{
    gotoxy(20, 10);
    int indiceCartas = 0;
    for (int i = 0 ; i < renTablero ; ++i){
        for (int j = 0 ; j < 5 ; ++j) Tablero[i][j] = MazoCartas[indiceCartas++];
    }
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------
/*
/** @brief Imprime el tamaño del tablero
 *
 * @param Tablero Es el arregble que lo bidimensional donde estan las cartas.
 *
 * @param renTablero Es la variable que indica la cantidad de renglones que tendra el tablero.

void ImprimeTablero(int Tablero[][10], int renTablero)
{
    for (int i = 0 ; i < renTablero ; ++i){
        for (int j = 0 ; j < 5 ; ++j) cout << setw(30) << Tablero[i][j];
        cout << endl;
    }
}
*/
//-----------------------------------------------------------------------------------------------------------------------------------------------------

/** @brief Mueve el cursor de selección en x de la carta durante el juego.
 *
 * @param x Es la posición en x donde se va a imprimir inicialmente el cursor.
 *
 * @param y Es la posición en y donde se va a imprimir inicialmente el cursor.
 *
 * @param dificultad Es la variable que inidca el tamaño del tablero.
 *
 * @param direccion Es la variable que indica en que dirección va el cursor horizontalmente.
*/
void MoverPosicionTablero_Horizontal(int &x, int y, int dificultad, int direccion)
{
    int aumentoX, anchoMarco, AltoMarco;

    if (dificultad == PRINCIPIANTE){
        aumentoX = 43;
        anchoMarco = 31;
        AltoMarco = 18;
    }

    if (dificultad == INTERMEDIO){
        aumentoX = 21;
        anchoMarco = 18;
        AltoMarco = 16;
    }

    if (dificultad == EXPERTO){
        aumentoX = 20;
        anchoMarco = 19;
        AltoMarco = 12;
    }

    BorraMarco(anchoMarco, AltoMarco, x, y);
    gotoxy ( (direccion == FLECHA_IZQ ? x-=aumentoX : x+=aumentoX), y );
    ImprimeMarco(anchoMarco, AltoMarco, x, y);
    gotoxy(x, y);
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------

/** @brief Mueve el cursor de selección en y de la carta durante el juego.
 *
 * @param x Es la posición en x donde se va a imprimir inicialmente el cursor.
 *
 * @param y Es la posición en y donde se va a imprimir inicialmente el cursor.
 *
 * @param dificultad Es la variable que inidca el tamaño del tablero.
 *
 * @param direccion Es la variable que indica en que dirección va el cursor verticalmente.
*/
void MoverPosicionTablero_Vertical(int x, int &y, int dificultad, int direccion)
{
    int aumentoY, anchoMarco, AltoMarco;

    if (dificultad == PRINCIPIANTE){
        aumentoY = 20;
        anchoMarco = 31;
        AltoMarco = 18;
    }

    if (dificultad == INTERMEDIO){
        aumentoY = 19;
        anchoMarco = 18;
        AltoMarco = 16;
    }

    if (dificultad == EXPERTO){
        aumentoY = 13;
        anchoMarco = 19;
        AltoMarco = 12;
    }

    BorraMarco(anchoMarco, AltoMarco, x, y);
    gotoxy (x, (direccion == FLECHA_ARRIBA ? y-=aumentoY : y+=aumentoY) );
    ImprimeMarco(anchoMarco, AltoMarco, x, y);
    gotoxy(x, y);
}

/** @brief Imprime el puntaje de los jugadores.
 *
 * @param marcador Es la variable del puntaje de los jugadores.
 *
 * @param jugador Es la variable que idica al jugador 1 o 2.
*/
void ImprimeMarcador(int &marcador, int jugador)
{
    int x, y = 50;
    if (jugador == 1){
        EstableceColor(BLANCO, ROJOCLARO);
        x = 50;
    }else{
        EstableceColor(BLANCO, AZULCLARO);
        x = 160;
    }

    gotoxy(x,y);
    cout << marcador;

}
