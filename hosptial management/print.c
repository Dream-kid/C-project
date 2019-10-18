typedef long long ll;
#include "structure.h"
#include "header.h"

void print(ll k, struct patient *p)
{
    static FILE *ptr;
    ptr=fopen("patient.txt","w+");
    ll i;
    ll cnt=0;
      for(i=0; i<=k; i++)
      {
            if(p[0].visited[i]) continue;
            cnt++;
      }
      fprintf(ptr,"%lld\n",cnt);
    for(i=0; i<=k; i++)
    {
        if(p[0].visited[i]) continue;
        //fprintf(ptr,"--------------------------------------------\n");
        fprintf(ptr,"%lld\n",p[i].reg);
        //fprintf(ptr,"---------------------------------------------\n");
        fprintf(ptr,"%s\n",p[i].name);
       // fprintf(ptr,"\n\t\tPassword is :");
        ll j;
        fprintf(ptr,"%lld\n",p[i].age);
        fprintf(ptr,"%c\n",p[i].gender);
        fprintf(ptr,"%s\n",p[i].bg);
        //fprintf(ptr,"---------------------------------------------\n");
        //fprintf(ptr,"\t\taddress:\n");
        fprintf(ptr,"%lld\n",p[i].a.hno);
        fprintf(ptr,"%s\n",p[i].a.present_city);
        fprintf(ptr,"%s\n",p[i].a.parmanent_city);
        fprintf(ptr,"%lld\n",p[i].phn);
       // fprintf(ptr,"...........................................\n");
    }
    fclose(ptr);
}
