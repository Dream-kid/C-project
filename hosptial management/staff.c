#include "header.h"
#include "structure.h"
typedef long long ll;
static ll ok;
void staff()
{
    char another,ch;
    static struct staff p[100];
    while(1)
    {
        design();
        gotoxy(12,4);
        printf("\n\n\t\t\t \xdb\xdb STAFF \xdb\xdb\n");
        printf("\n\t\t\t\xdb press 1.Enter a new Entry\n");
        printf("\n\t\t\t\xdb press 2.Modify Existing\n");
        printf("\n\t\t\t\xdb press 3.Search an entry\n");
        printf("\n\t\t\t\xdb press 4.Listing of records\n");
        printf("\n\t\t\t\xdb press 5.Delete an Entry\n");
        printf("\n\t\t\t\xdb press 6.Restore an Entry\n");
        printf("\n\t\t\t\xdb press 7.Main Menu\n");
        printf("\n\n\t\t\t\xdb Enter your choice here:");
        ll a;
        scanf("%lld",&a);
        ll i=0;

        switch(a)
        {
        case 1:
            if(add_staff(ok,p))
                ok++;
            break;
        case 2:
        {
            modify_staff(ok-1,p);
            break;
        }

        case 3:
        {
            search_staff(ok-1,p);
            break;
        }
        case 4:
        {
            list_staff(ok-1,p);
            break;
        }
        case 5:
        {
            delete_staff(ok-1,p);
            break;
        }
        case 6:
        {
            restore_staff(ok-1,p);
            break;
        }
        case 7:
        {
            option();

        }
        }

        print(ok-1,p);

    }
}






