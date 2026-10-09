//Define a structure Employee with a nested date for joning date print all employees who joint after the year 2020.
#include<stdio.h>
struct Date
{
    int day,month,year;
};
struct employee{
int id;
char name[60];
struct Date join;

};
int main(){
struct employee emp[3];
int i;
for(int i=0;i<3;i++)
{
    printf("Employee %d id,name & join Date:",i+1);
    scanf("%d %s %d %d %d",&emp[i].id,emp[i].name,&emp[i].join.day,&emp[i].join.month,&emp[i].join.year);
}
printf("Join after 2020:\n");

    for(int i=0;i<3;i++)
    {
        if(emp[i].join.year>2020)
        {
            printf("name:%s|joined:%d\n",emp[i].name,emp[i].join.year);
        }
    }

return 0;


}

