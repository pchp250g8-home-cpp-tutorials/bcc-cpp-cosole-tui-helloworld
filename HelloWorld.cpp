#include <iostream>
#include <tchar.h>
#include <conio.h>

int _tmain(int argc, _TCHAR* argv[])
{
    using namespace std;
    clrscr();
    _setcursortype(_NOCURSOR);
    gotoxy(10,10);
    cout<<"Hello,World!!!";
    getch();
}
