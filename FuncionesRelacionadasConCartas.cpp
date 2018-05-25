/** @brief Imprime el frente de la carta seleccionada.
 *
 * @param ancho Es la variable que indica el ancho de la carta.
 *
 * @param alto Es la variable que indica el alto de la carta.
 *
 * @param x Es la posición en x donde se va a imprimir inicialmente la carta.
 *
 * @param y Es la posición en y donde se va a imprimir inicialmente la carta.
*/
void MostrarCarta(int ancho, int alto, int x, int y)
{
    // Parte superior del marco
    EstableceColor(ROJOCLARO, ROJOCLARO);
    x++;
    y++;
    gotoxy(x,y);
    for(int i = 0 ; i < ancho ; ++i) cout << ' ';

    // Parte media del marco
    for(int i = 1 ; i <= alto - 2 ; ++i){
        gotoxy(x,++y);
        cout << ' ';
        for(int j = 1 ; j < ancho ; ++j) cout << ' ';
    }

    // Parte inferior del marco
    gotoxy(x,++y);
    for(int i = 0 ; i < ancho ; ++i) cout << ' ';
    EstableceColor(BLANCO, ROJOCLARO);

}

//-----------------------------------------------------------------------------------------------------------------------------------------------------
/** @brief Imprime la parte de atras de la carta.
 *
 * @param ancho Es la variable que indica el ancho de la carta.
 *
 * @param alto Es la variable que indica el alto de la carta.
 *
 * @param x Es la posición en x donde se va a imprimir inicialmente la carta.
 *
 * @param y Es la posición en y donde se va a imprimir inicialmente la carta.
*/
void ImprimeCartaVolteada(int ancho, int alto, int x, int y)
{
    // Parte superior del marco
    EstableceColor(VERDECLARO, ROJOCLARO);
    gotoxy(x,y);
    for(int i = 0 ; i < ancho ; ++i) cout << ' ';

    // Parte media del marco
    for(int i = 1 ; i <= alto - 2 ; ++i){
        gotoxy(x,++y);
        cout << ' ';
        for(int j = 1 ; j < ancho ; ++j) cout << ' ';
    }

    // Parte inferior del marco
    gotoxy(x,++y);
    for(int i = 0 ; i < ancho ; ++i) cout << ' ';

}

//-----------------------------------------------------------------------------------------------------------------------------------------------------
/** @brief Mezcla el arreglo unidimensional donde se representan las cartas.
 *
 * @param A Es el arreglo unidimensionl donde estan las representaciones de las cartas.
 *
 * @param n Es el tamaño del arreglo.
*/
void BarajarCartas(int A[], int n)
{
    int pos;
    double aux;

    for (int i = 0 ; i < (n-1) ; ++i){
        pos  = rand () % ( n - (i + 1) ) + i + 1;
        aux = A[i];
        A[i] = A[pos];
        A[pos] = aux;
    }
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------
/** @brief Borra el marco que muestra el que se esta seleccionando en pantalla.
 *
 * @param ancho Es la variable que indica el ancho de la selección.
 *
 * @param alto Es la variable que indica el alto de la selección.
 *
 * @param x Es la posición en x donde se va a imprimir inicialmente la selección.
 *
 * @param y Es la posición en y donde se va a imprimir inicialmente la selección.
*/
void BorraMarco(int ancho, int alto, int x, int y)
{
    gotoxy(x,y);
    for(int i = 1 ; i <= ancho ; ++i) cout << ' ';

     for(int i = 1 ; i <= alto - 1 ; ++i){
        gotoxy(x,++y);
        cout << ' ';
        for(int j = 1 ; j <= alto - 1 ; ++j){
            gotoxy(x+ancho-1, y);
            cout << ' ';
        }
    }

    // Parte inferior del marco
    gotoxy(x,++y);
    for(int i = 1 ; i <= ancho ; ++i) cout << ' ';
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------
/** @brief Imprime el marco que muestra que se esta seleccionando en pantalla.
 *
 * @param ancho Es la variable que indica el ancho de la selección.
 *
 * @param alto Es la variable que indica el alto de la selección.
 *
 * @param x Es la posición en x donde se va a imprimir inicialmente la selección.
 *
 * @param y Es la posición en y donde se va a imprimir inicialmente la selección.
*/
void ImprimeMarco(int ancho, int alto, int x, int y)
{
    // Parte superior del marco
    gotoxy(x,y);
    cout << (char)ESI;
    for(int i = 1 ; i <= ancho - 2 ; ++i) cout << (char)BH;
    cout << (char)ESD;

    // Parte media del marco
    for(int i = 1 ; i <= alto - 1 ; ++i){
        gotoxy(x,++y);
        cout << (char)BV;
        for(int j = 1 ; j <= alto - 1 ; ++j){
            gotoxy(x+ancho-1, y);
            cout << (char)BV;
        }
    }

    // Parte inferior del marco
    gotoxy(x,++y);
    cout << (char)EII;
    for(int i = 1 ; i <= ancho - 2 ; ++i) cout << (char)BH;
    cout << (char)EID;

}
