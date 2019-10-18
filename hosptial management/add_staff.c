
typedef long long ll;
#include "structure.h"
#include "header.h"

ll add_staff(ll k, struct staff *p)
{
    ll o;
    design();
    gotoxy(12,4);
    char *ptr;
    ll *ptr1;
    ptr= (char*)calloc(100, sizeof(char));
    printf("\n\n\t\t \xdb Enter Registration Number: ");
    scanf("%lld",&p[k].reg);
    if(p[0].duplicate[p[k].reg]==1)
    {
        pf("\xdb This number already exit!!!\n");
        return 0;
    }
    p[0].duplicate[p[k].reg]=1;
    printf("\n\t\t\xdb Enter the name of the Staff: ");
    getchar();
    gets(ptr);
    strcpy(p[k].name,ptr);
    free(ptr);
    printf("\n\t\t\xdb Enter 5 digit password for %s(warning you can't change it!!!) :",p[k].name);
    ll i;
    for( i=0; i<5; i++)
    {
        p[k].pass[i]=getch();
        putch('*');
    }
    printf("\n\t\t\xdb Enter the age of %s :",p[k].name);
    scanf("%lld",&o);
    ptr=&o;
    p[k].age=*ptr;
    getchar();
    printf("\n\t\t\xdb Enter the gender of %s (M/F): ",p[k].name );
    scanf("%c",&p[k].gender);
    printf("\n\t\t\xdb Enter the blood group of %s :",p[k].name);
    scanf("%s",p[k].bg,ptr);
    printf("\n\t\t\xdb Enter the address of %s:\n",p[k].name);
    printf("\n\t\t\t\xdb Enter the house no: ");
    scanf("%lld",&p[k].a.hno);
    getchar();
    printf("\n\t\t\xdb Enter the present address: ");
    gets(p[k].a.present_city);
    printf("\n\t\tEnter the permanent address: ");
    gets(p[k].a.parmanent_city);
    printf("\n\t\t\xdb Enter the phone number : ");
    scanf("%lld",&p[k].phn);
    design();
    gotoxy(12,4);
    return 1;
}
