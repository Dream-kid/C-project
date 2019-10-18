typedef long long ll;
#include "structure.h"
#include "header.h"

ll read1(struct patient *p)
{
    //struct patient p[100];
    FILE *ptr;
    ptr=fopen("patient.txt","r");

    ll k=0;
    ll reg,age,phn,hno;
    char *name,*pass,*bg,*present_city,*parmanent_city;
    char gender;

    name = (char*)calloc(100, sizeof(char));
    pass = (char*)calloc(100, sizeof(char));
    bg = (char*)calloc(100, sizeof(char));
    present_city = (char*)calloc(100, sizeof(char));
    parmanent_city = (char*)calloc(100, sizeof(char));
    ll o;
    fscanf(ptr,"%lld",&o);
    for(k=0; k<=o; k++)
    {
        fscanf(ptr,"%lld %s %lld %c %s %lld %s %s %lld",&reg,name,&age,&gender,bg,&hno,present_city,parmanent_city,&phn);
        p[k].reg=reg;
        strcpy(p[k].name,name);
        p[k].age=age;
        p[k].gender=gender;
        strcpy(p[k].bg,bg);
        p[k].a.hno=hno;
        strcpy(p[k].a.present_city,present_city);
        strcpy(p[k].a.parmanent_city,parmanent_city);
        p[k].phn=phn;
    }
    fclose(ptr);
    return o;
}
