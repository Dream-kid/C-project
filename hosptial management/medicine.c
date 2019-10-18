#include <stdio.h>
#include "structure.h"
typedef long long ll;
void medicine()
{
    static  ll duplicate[10000];
    static  ll visited[100];
    static struct product p[1000];
    FILE *ptr;
    ptr=fopen("medicine.txt","w+");
    ll i=0;
    static ll k=-1;
    while(1)
    {
        printf("\n\n\t\t\t MEDICINE");
        printf("\n\t\t\t1.Enter a new Entry");
        printf("\n\t\t\t2.Modify Existing");
        printf("\n\t\t\t3.Search an entry");
        printf("\n\t\t\t4.Listing of records");
        printf("\n\t\t\t5.Delete an Entry");
        printf("\n\t\t\t6.Main Menu");
        printf("\n\n\t\t\tEnter your choice here.");
        ll a;
        scanf("%lld",&a);
        switch(a)
        {
        case 1:
            k++;
            printf("\n\n\n Enter the serial Number: ");
            scanf("%lld",&p[k].reg);
            if(duplicate[p[k].reg])
            {
                printf("This number already exist\n");
                break;
            }
            duplicate[p[k].reg]=1;
            printf("\nEnter the name of the medicine: ");
            getchar();
            gets(p[k].name);
            puts(p[k].name);
            printf("\nEnter the price of the medicine: ");
            scanf("%lf",&p[k].price);
            printf("\nEnter the expire date of %s(m/d/y): ",p[k].name);
            scanf("%s",p[k].bg);
            printf("\nEnter the size of the medicine %s:\n",p[k].name);
            scanf("%s",p[k].phn);
            printf("\nEnter the disease or problem for which %s wants treatment: ",p[k].name);
            getchar();
            gets(p[i].disease);
            printf("\nEnter the doctor name to which %s being referred: ",p[k].name);
            gets(p[k].doctor_name);
            break;
        case 2:
            printf("\nEnter the serial number of patient to modify: ");
            ll o;
            scanf("%lld",&o);
            if(!duplicate[o])
            {
                printf("This number doesn't exist\n");
                goto read;
            }
            for(i=0; i<=k; i++)
            {
                if(p[i].reg==o)
                {
                    printf("\nEnter the name of the medicine: ");

                    getchar();
                    gets(p[i].name);
                    printf("\nEnter the price of the medicine: ");
                    scanf("%lf",p[i].price);
                    printf("\nEnter the expire date of %s(m/d/y): ",p[i].name);
                    scanf("%s",p[i].bg);
                    printf("\nEnter the size of the medicine %s:\n",p[i].name);
                    scanf("%s",p[i].phn);
                    printf("\nEnter the disease or problem for which %s wants treatment: ",p[k].name);
                    getchar();
                    gets(p[i].disease);
                    printf("\nEnter the doctor name to which %s being referred: ",p[i].name);
                    gets(p[i].doctor_name);
                    break;
                }
            }
        case 3:
        {
            ll o;
            printf("Enter the registrion number do u want to search :");
            scanf("%lld",&o);
            if(!duplicate[o])
            {
                printf("This number doesn't exist\n");
                goto read;
            }
            else
            {
                for(i=0; i<=k; i++)
                {
                    if(p[i].reg==o)
                    {
                        printf("...........................................\n");
                        printf("********************************************\n");
                        printf("--------------------------------------------\n");
                        printf("\t\tserial Number is: %lld\n",p[i].reg);
                        printf("...........................................\n");
                        printf("********************************************\n");
                        printf("---------------------------------------------\n");
                        printf("\t\tprice :%.2lf\n",p[i].price);
                        printf("\t\texpire date :%s\n",p[i].bg);
                        printf("\t\tsize of the medicine :%s\n",p[i].phn);
                        printf("...........................................\n");
                        printf("********************************************\n");
                        printf("---------------------------------------------\n");
                        printf("\t\tDisease::\n");
                        printf("\t\tdisease :%s\n",p[i].disease);
                        printf("\t\tdoctor name :%s\n",p[i].doctor_name);
                        printf("...........................................\n");
                        printf("********************************************\n");
                        printf("---------------------------------------------\n");
                        goto read;
                    }
                }
            }
        }
        case 4:
        {
            ll cnt=0;
            for(i=0; i<=k; i++)
            {

                if(visited[i]) continue;cnt++;
                printf("...........................................\n");
                printf("********************************************\n");
                printf("--------------------------------------------\n");
                printf("\t\tserial Number is: %lld\n",p[i].reg);
                printf("...........................................\n");
                printf("********************************************\n");
                printf("---------------------------------------------\n");
                printf("\t\tprice :%.2lf\n",p[i].price);
                printf("\t\texpire date :%s\n",p[i].bg);
                printf("\t\tsize of the medicine :%s\n",p[i].phn);
                printf("...........................................\n");
                printf("********************************************\n");
                printf("---------------------------------------------\n");
                printf("\t\tDisease::\n");
                printf("\t\tdisease :%s\n",p[i].disease);
                printf("\t\tdoctor name :%s\n",p[i].doctor_name);
                printf("...........................................\n");
                printf("********************************************\n");
                printf("---------------------------------------------\n");
            }
            if(!cnt) printf("empty!!!\n");
            break;
        }
        case 5:
        {
            ll o;
            printf("Enter the registrion number do u want to delete :");
            scanf("%lld",&o);
            if(!duplicate[o])
            {
                printf("This number doesn't exist\n");
                goto read;
            }
            else
            {
                for(i=0; i<=k; i++)
                {

                    if(p[i].reg==o)
                    {
                        visited[i]=1;
                        duplicate[o]=0;
                        goto read;
                    }
                }
            }
        }
        case 6:
        {
            option();
        }
        }
read:
        ptr=fopen("medicine.txt","w+");
        for(i=0; i<=k; i++)
        {
            if(visited[i]) continue;
            fprintf(ptr,"...........................................\n");
            fprintf(ptr,"********************************************\n");
            fprintf(ptr,"--------------------------------------------\n");
            fprintf(ptr,"\t\tserial Number is: %lld\n",p[i].reg);
            fprintf(ptr,"...........................................\n");
            fprintf(ptr,"********************************************\n");
            fprintf(ptr,"---------------------------------------------\n");
            fprintf(ptr,"\t\tprice :%.2lf\n",p[i].price);
            fprintf(ptr,"\t\texpire date :%s\n",p[i].bg);
            fprintf(ptr,"\t\tsize of the medicine :%s\n",p[i].phn);
            fprintf(ptr,"...........................................\n");
            fprintf(ptr,"********************************************\n");
            fprintf(ptr,"---------------------------------------------\n");
            fprintf(ptr,"\t\tDisease::\n");
            fprintf(ptr,"\t\tdisease :%s\n",p[i].disease);
            fprintf(ptr,"\t\tdoctor name :%s\n",p[i].doctor_name);
            fprintf(ptr,"...........................................\n");
            fprintf(ptr,"********************************************\n");
            fprintf(ptr,"---------------------------------------------\n");
        }
        fclose(ptr);
    }
}

