#include"header.h"

FILE *fp,*ft,*fs;
typedef struct
{
    int dd,mm,yy;
} Date;

void design()
{
    system("cls");
    gotoxy(1,0);
    int i;
    for(i=0; i<=99; i++) pf("\xdb");
    gotoxy(1,2);
    printf("\xdb");
    gotoxy(100,2);
    printf("\xdb");
    //int i;
    for(i=1; i<27; i++)
    {
        gotoxy(1,i);
        printf("\xdb");
        gotoxy(100,i);
        printf("\xdb");
    }
    for(i=3; i<27; i++)
    {
        gotoxy(1,i);
        printf("\xdb");
        gotoxy(100,i);
        printf("\xdb");
    }
    gotoxy(1,27);
    for(i=0; i<=99; i++) pf("\xdb");
    gotoxy(2,26);
    Time();
    gotoxy(84,26);
    date();
    gotoxy (2,2);
    puts("\t\t\tWELCOME TO TRUST AND LUCK HOSPITAL AND HEALTH CARE\n");
    int o=98;
    gotoxy(2,3);
    while(o--)
    {
        pf("=");
    }
    pf("\n\n");

}


COORD coord = {0, 0}; // sets coordinates to 0,0
void gotoxy (int x, int y)
{
    coord.X = x;
    coord.Y = y; // X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void  delay(unsigned int mseconds)
{
    clock_t goal=mseconds+clock();
    while (goal>clock());
}


int Time()
{
    char dest[50];
    time_t t;
    struct tm *tm;
    char pm[3],HH[3],MM[3],SS[3];
    t=time(NULL);
    tm=localtime(&t);

    strftime(dest,50,"%I %M %S %p",tm);
    sscanf(dest,"%s %s %s %s",&HH,&MM,&SS,pm);
    printf("Time: %s:%s:%s %s\n",HH,MM,SS,pm);
}
int date()
{
    char dest[50];
    time_t t;
    struct tm *tm;
    int dd,mm,yy;
    t=time(NULL);
    tm=localtime(&t);

    strftime(dest,50,"%d %m %y",tm);
    sscanf(dest,"%d %d %d",&dd,&mm,&yy);
    printf("Date: %d/%d/%d\n",dd,mm,yy);
}

