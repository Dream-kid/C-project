typedef long long ll;
#include "header.h"
void option()
{

    ll choice;
    design();
    puts("\t\t\t\xb2 press 1 for PATIENT SECTOR\n\t\t\t\xb2 press 2 for STAFF MEMBERS\n\t\t\t\xb2 press 3 for AVAILABLE DOCTOR\n\t\t\t\xb2 press 4 for BLOOD BANK\n\t\t\t\xb2 press 0 for EXIT\n\n\n\t\t\xb2 ENTER YOUR CHOICE: ");
    gotoxy(38,12);
    scanf("%lld",&choice);
    switch(choice)
    {
    case 1:
        patient();
        break;
    case 2:
        staff();
        break;
    case 3:
        doctor();
        break;
    case 4:
        blood();
        break;
    case 0:
    {
        char c;
        gotoxy(27,15);
        pf("Are you sure press yes(y/Y) or no(n/N):");
        getchar();
        sf("%c",&c);
        if('n'==tolower(c)) break;
        system("cls");
        gotoxy(27,10);
        exit(1);
    }
    }

    option();
}
