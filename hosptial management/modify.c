typedef long long ll;
#include "structure.h"
#include "header.h"

void modify(ll k, struct patient *p)
{
     design();
    gotoxy(12,4);
    printf("\n\t\tEnter the registration number of patient to modify: ");
    ll o;
    scanf("%lld",&o);
    if(!p[0].duplicate[o])
    {
        pf("\t\tThis number doesn't exit!!!\n");
        pf("\t\tpress any key to continue....");
        getchar();
        getchar();
        return;
    }
    ll i;
    for(i=0; i<=k; i++)
    {
        if(p[i].reg==o)
        {
            read:
              pf("\n\t\tpress 1 to Enter the password for %lld:",p[i].reg);
              pf("\n\t\tpress 0 for exit:\n\t\tenter a number:");
              sll(o);
              if(o!=1) patient();
                char c;
                ll cnt=0,j;
                design();
              gotoxy(12,4);
                pf("Enter your password:");
                //getchar();
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

            pf("\t\tWhat do you want to modify\n\t\t\tfor name press 1:\n\t\t\tfor age press 2:\n\t\t\tfor blood group press 3:\n\t\t\tfor mobile number press 4:\n\t\t\tfor address press 5:\n\t\t\tfor gender press 6:\n\t\t\t");
            ll d;
            pf("\n\t\tEnter your choice:");
            sll(d);
            switch(d)
            {
            case 1:
            {
                printf("\n\t\tEnter the name of the patient: ");
                getchar();
                gets(p[i].name);
                break;
            }
            case 2:
            {
                printf("\n\t\tEnter the age of the %s: ",p[i].name);
                scanf("%lld",&p[i].age);
                break;
            }
            case 3:
            {
                printf("\n\t\tEnter the blood group : ");
                scanf("%s",p[i].bg);
                break;
            }
            case 4:
            {
                printf("\n\t\tEnter the phone number : ");
                scanf("%lld",p[i].phn);
                break;
            }
            case 5:
            {
                printf("\n\t\t\tEnter the address of  %s:\n",p[i].name);
                printf("\n\t\tEnter the house no: ");
                scanf("%lld",&p[i].a.hno);
                getchar();
                printf("\n\t\tEnter the present address: ");
                gets(p[i].a.present_city);
                printf("\n\t\tEnter the permanent address: ");
                gets(p[i].a.parmanent_city);
                break;
            }
            case 6:
            {
                getchar();
                printf("\n\t\tEnter the gender of %s (M/F): ",p[i].name);
                scanf("%c",&p[i].gender);
            }

            }
        }

    }
    pf("\t\tMODIFIED!!!!!!\n");
     pf("\t\tpress any key to continue....");
        getchar();
        getchar();
    design();
    gotoxy(12,4);
}
