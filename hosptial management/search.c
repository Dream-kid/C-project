typedef long long ll;
#include "structure.h"
#include "header.h"

void search(ll k, struct patient *p)
{
    design();
    gotoxy(12,4);
    k++;

    printf("what do u want to search \n\t\tpress 1 by id \n\t\tpress 2 by name\n\t\tpress 3 by phone no\n\t\tEnter a number:");
    ll j;
    ll cnt1=0;
    scanf("%lld",&j);

    if(j==1||j==3)
    {
        ll o,i;
        pf("\t\tEnter number:");
        scanf("%lld",&o);
        for(i=0; i<=k; i++)
        {
            if(p[i].reg==o||p[i].phn==o)
            {
                pf("\t\t\xdb Registration Number is: %lld\n",p[i].reg);
                pf("\t\t\xdb Personal information:\n\t\t\xdb Name is :%s\n",p[i].name);
                pf("\t\t\xdb age :%d\n",p[i].age);
                pf("\t\t\xdb gender :%c\n",p[i].gender);
                pf("\t\t\xdb blood group :%s\n",p[i].bg);
                pf("\t\t\xdb address:\n");
                pf("\t\t\xdb house no :%d\n",p[i].a.hno);
                pf("\t\t\xdb present city :%s\n",p[i].a.present_city);
                pf("\t\t\xdb parmanent city :%s\n",p[i].a.parmanent_city);
                printf("\t\t\xdb phn no :%lld\n",p[i].phn);
                cnt1++;
                getchar();
                break;
            }
        }
        if(!cnt1) getchar();

    }
    else if(j==2)
    {

        ll arr[100];
        char arr12[100];
        char arr13[100];
        ll i;
        char c;
        pf("\t\tEnter full or first character of your name:");
        getchar();
        gets(arr12);
        //  puts(arr12);
        //pll(k);
        ll l=0;
        for(j=0; j<k; j++)
        {
            ll cnt=0;
            ll len=strlen(arr12);
            for(i=0; i<len; i++)
            {
                strcpy(arr13,p[j].name);
                c=arr13[i];
                if(c!=arr12[i])
                {
                    cnt++;
                    break;
                }
            }
            if(!cnt)
            {
                arr[l]=j;
                l++;
            }
        }
        for(i=0; i<l; i++)
        {
            pf("\t\tpress :%lld for %s\n",i+1,p[arr[i]].name);
            cnt1++;
        }
        if(cnt1)
        {
            pf("\t\tpress a number :");

            ll t;
            sll(t);
            t--;
            design();
            gotoxy(12,4);
            i=arr[t];
            pf("\t\t\xdb Registration Number is: %lld\n",p[i].reg);
            pf("\t\t\xdb Personal information:\n\t\t\xdb Name is :%s\n",p[i].name);
            pf("\t\t\xdb age :%d\n",p[i].age);
            pf("\t\t\xdb gender :%c\n",p[i].gender);
            pf("\t\t\xdb blood group :%s\n",p[i].bg);
            pf("\t\t\xdb address:\n");
            pf("\t\t\xdb house no :%d\n",p[i].a.hno);
            pf("\t\t\xdb present city :%s\n",p[i].a.present_city);
            pf("\t\t\xdb parmanent city :%s\n",p[i].a.parmanent_city);
            pf("\t\t\xdb phn no :%lld\n",p[i].phn);

            getchar();
        }
    }
    if(!cnt1)pf("\n\n\t\tNOT FOUND!!!\n");
    pf("\t\tpress any key to continue....");
    getchar();
    design();
    gotoxy(12,4);
    return ;
}
