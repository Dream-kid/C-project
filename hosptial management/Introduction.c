#include"header.h"
void Introduction()
{
    int l=9;

    design();
    gotoxy(3,6);
    while(l--)
    {
        delay(200);
        pf("WELCOME!!!");
    }
    gotoxy(3,8);
    l=18;
    while(l--)
    {
        delay(200);
        pf("=====");
    }
    pf("\n\n");
    gotoxy(3,10);
    pf("\t\tENTER ANY KEY TO CONTINUE....");

    getchar();
}
