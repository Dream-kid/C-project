
typedef long long ll;
struct address
{
    ll hno;
    char present_city[100];
    char parmanent_city[100];
};
struct patient
{
    ll reg;
    char name[100];
    ll pass[100];
    ll duplicate[100];
    ll visited[100];
    ll age;
    char bg[31];
    char gender;
    struct address a;
    ll phn;
};
struct doctor
{
    char name1[100];
    char name2[100];
    char quali2[100];
    char quali1[100];
    char time[100];
   ll cost;
};
struct staff
{
    ll reg;
    char name[100];
    ll pass[100];
    ll duplicate[100];
    ll visited[100];
    ll age;
    char bg[31];
    char gender;
    struct address a;
    ll phn;
    char desig[10];
};
struct blood
{
    char name1[100];
    char name2[100];
    char quali2[100];
    char quali1[100];
    char time1[100];
};


