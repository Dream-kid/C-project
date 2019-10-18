typedef long long ll;
#include "structure.h"
#include "header.h"

void print_staff(ll k, struct staff *p)
{
    static FILE *ptr;
    ptr=fopen("staff.txt","w+");
    ll i;
    for(i=0; i<=k; i++)
    {
        if(p[0].visited[i]) continue;
        fprintf(ptr,"--------------------------------------------\n");
        fprintf(ptr,"\t\tRegistration Number is: %lld\n",p[i].reg);
        fprintf(ptr,"---------------------------------------------\n");
        fprintf(ptr,"\t\tPersonal information:\n\t\tName is :%s\n",p[i].name);
        fprintf(ptr,"\n\t\tPassword is :");
        ll j;
        char c;
        for( j=0; j<5; j++)
        {
            c=p[i].pass[j];
            fprintf(ptr,"%c",c);
        }
        fprintf(ptr,"\n\t\tage :%d\n",p[i].age);
        fprintf(ptr,"\t\tgender :%c\n",p[i].gender);
        fprintf(ptr,"\t\tblood group :%s\n",p[i].bg);
        fprintf(ptr,"---------------------------------------------\n");
        fprintf(ptr,"\t\taddress:\n");
        fprintf(ptr,"\t\thouse no :%d\n",p[i].a.hno);
        fprintf(ptr,"\t\tpresent city :%s\n",p[i].a.present_city);
        fprintf(ptr,"\t\tparmanent city :%s\n",p[i].a.parmanent_city);
        fprintf(ptr,"\t\tphn no :%lld\n",p[i].phn);
        fprintf(ptr,"...........................................\n");
    }
    fclose(ptr);
}
