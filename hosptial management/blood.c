
#include "header.h"
#include "structure.h"
typedef long long ll;
void blood()
{

    struct blood arr[20][20];
    static FILE *ptr;
    ll j;
    char another,ch;
    ptr=fopen("blood.txt","r");
    ll fee,i;
    char *str1,*str2,*str3,*str4,*str5;
    str1 = (char*)calloc(100, sizeof(char));
    str2 = (char*)malloc(100*sizeof(char));
    str3 = (char*)calloc(100, sizeof(char));
    str4 = (char*)malloc(100*sizeof(char));
    str5 = (char*)calloc(100, sizeof(char));
    for( i=0; i<8; i++)
    {
        for(j=0; j<4; j++)
        {
            fscanf(ptr, "%s %s %s %s %s", str1, str2, str3,str4,str5);
            strcpy(arr[i][j].name1,str1);
            strcpy(arr[i][j].name2,str2);
            strcpy(arr[i][j].quali1,str3);
            strcpy(arr[i][j].quali2,str4);
            strcpy(arr[i][j].time1,str5);
        }
    }
    while(1)
    {
        design();
        gotoxy(12,4);
        pf("\n\t\t\t  \xb2\xb2 AVILABLE BLOOD DONORS AT THIS MOMENT \xb2\xb2\n\n\t\t\t\xb2 FOR A+ blood PRESS 1.\n\t\t\t\xb2 FOR A- blood PRESS 2.\n\t\t\t\xb2 FOR B+ blood PRESS 3.\n\t\t\t\xb2 FOR B- blood PRESS 4.\n\t\t\t\xb2");
        pf(" FOR O+ blood PRESS 5.\n\t\t\t\xb2 FOR O- blood PRESS 6.\n\t\t\t\xb2 FOR AB+ blood PRESS 7.\n\t\t\t\xb2 FOR OB- blood PRESS 8.\n\t\t\t\xb2 FOR EXIT PRESS 0.\n\n");
        pf("\n\t\tENTER A NUMBER:");
        gotoxy(33,18);
        scanf("%lld",&i);
        i--;
        if(i==-1)
        {
           free(str1);
           free(str2);
           free(str3);
           free(str4);
           free(str5);
            option();
        }
        design();
        gotoxy(12,4);
        for(j=0; j<3; j++)
        {
            printf("\n\t\t\t\xb2 Name: %s %s",arr[i][j].name1, arr[i][j].name2);
            printf("\n\t\t\t\xb2 %s %s",arr[i][j].quali1, arr[i][j].quali2);
            printf(" %s",arr[i][j].time1);
        }
        j=3;
         printf("\n\t\t\t\xb2 Blood %s %s",arr[i][j].name1, arr[i][j].name2);
            printf("\n\t\t\t\xb2 %s %s",arr[i][j].quali1, arr[i][j].quali2);
            printf(" %s",arr[i][j].time1);
        //printf("\n\t\t\t\xb2 Fee: %lld taka.\n\n",arr[i].cost);
        getchar();
        pf("\n\n\t\tPress any key to continue.......");
        getchar();
        fclose(ptr);
    }
}








