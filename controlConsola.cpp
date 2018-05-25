#include <windows.h>

//-------------------------------------------------------------------------------------------------------------------------------------------------------
void gotoxy(short x,short y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = {x-1,y-1};
    SetConsoleCursorPosition(handle,coord);
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------------------------

void EstableceColor(int colorFondo, int colorTexto)
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorFondo*16 + colorTexto);
}
//--------------------------------------------------------------------------------------------------------------------------------------------------


//------------------------------------------------------------------------------------------------------------------------------------
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
//-----------------------------------------------------------------------------------------------------------------------------


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
//----------------------------------------------------------------------------------------------------------------------------------
