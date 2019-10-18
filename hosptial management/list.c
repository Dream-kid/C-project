typedef long long ll;
#include "structure.h"
#include "header.h"

void list(ll k, struct patient *p)
{
    design();
    gotoxy(12,4);

    ll cnt=0;
    ll i;
    getchar();
    for(i=0; i<=k; i++)
    {

        if(p[0].visited[i]) continue;
        cnt++;
        printf("\t\t\xdb Registration Number is: %lld\n",p[i].reg);
        printf("\t\t\xdb Personal information:\n\t\t\xdb Name is :%s\n",p[i].name);
        printf("\t\t\xdb age :%d\n",p[i].age);
        printf("\t\t\xdb gender :%c\n",p[i].gender);
        printf("\t\t\xdb blood group :%s\n",p[i].bg);
        printf("\t\t\xdb address:\n");
        printf("\t\t\xdb house no :%d\n",p[i].a.hno);
        printf("\t\t\xdb present city :%s\n",p[i].a.present_city);
        printf("\t\t\xdb parmanent city :%s\n",p[i].a.parmanent_city);
        printf("\t\t\xdb phn no :%lld\n",p[i].phn);
        pf("\t\tpress any key to see next....\t\t");
        getchar();
        design();
        gotoxy(12,4);
    }
    if(!cnt)
        printf("\n\n\t\tyour list is empty!!!\n");
    pf("\t\tpress any key to continue....");
    getchar();
    design();
    gotoxy(12,4);

}
