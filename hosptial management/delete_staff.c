
typedef long long ll;
#include "structure.h"
#include "header.h"
void delete_staff(ll k, struct staff *p)
{
    design();
    gotoxy(12,4);
    static FILE *ptr;
    ptr=fopen("delete_staff.txt","w+");
    ll o,i;
    printf("\n\t\tEnter the registrion number do u want to delete :");
    scanf("%lld",&o);
    ll mark=0;
    if(!p[0].duplicate[o])
    {
        printf("\t\tThis number doesn't exist.press any key to continue...");
        mark++;
        goto read1;
    }
    else
    {
        for(i=0; i<=k; i++)
        {

            if(p[i].reg==o)
            {
                getchar();
                ll j;
read:
                pf("\n\t\tpress 1 to Enter the password for %lld:",p[i].reg);
                pf("\n\t\tpress 0 for exit:\n\t\tenter a number:");
                sll(o);
                if(o!=1) patient();
                char c;
                ll cnt=0;
                design();
                gotoxy(12,4);
                pf("Enter your password:");
                for( j=0; j<5; j++)
                {
                    c=getch();
                    putch('*');
                    if(c!=p[i].pass[j]) cnt++;
                }
                design();
                gotoxy(12,4);
                if(cnt)
                {
                    pf("Password doesn't match\n");
                    goto read;
                }
                p[0].visited[i]=1;
                p[0].duplicate[o]=0;

            }
        }
    }
read1:
    for(i=0; i<=k; i++)
    {
        if(p[0].visited[i])
        {
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
            fprintf(ptr,"\t\tage :%d\n",p[i].age);
            fprintf(ptr,"\t\tgender :%c\n",p[i].gender);
            fprintf(ptr,"\t\tblood group :%s\n",p[i].bg);
            fprintf(ptr,"---------------------------------------------\n");
            fprintf(ptr,"\t\taddress:\n");
            fprintf(ptr,"\t\thouse no :%d\n",p[i].a.hno);
            fprintf(ptr,"\t\tpresent city :%s\n",p[i].a.present_city);
            fprintf(ptr,"\t\tparmanent city :%s\n",p[i].a.parmanent_city);
            fprintf(ptr,"\t\tphn no :%lld\n",p[i].phn);
            fprintf(ptr,"---------------------------------------------\n");
        }
    }
    fclose(ptr);
    if(!mark)pf("\n\n\t\tDeleted!!!press any key to continue...");
    getchar();
    getchar();
    return;
}
