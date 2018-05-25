#include <iostream>

using std::cout;


//--------------------------------------------------------------------------------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------------------------------------------------------
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
//-------------------------------------------------------------------------------------------------------------------------------

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

//------------------------------------------------------------------------------------------------------------------------------


//-----------------------------------------------------------------------------------------------------------------------------------------------------
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
//-----------------------------------------------------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------------------------------------------------------------------

void BorraMarco(int ancho, int alto, int x, int y);
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
