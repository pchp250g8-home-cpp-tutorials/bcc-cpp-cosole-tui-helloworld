#include <iostream>
#include <tchar.h>
#include "constream.hpp"

int _tmain(int argc, _TCHAR* argv[])
{
    using namespace std;
    using namespace conio;
    clrscr(cout);
    cout << setcrsrtype(0) << setxy(10,10)
    	 << "Hello,World!!!";
    getch();
}
