/*create  a structure called student withmembers name,age,and total marks,
write a c programe to input data for two students,
Display their information,and find the average of total marks.*/

#include<stdio.h>
struct student{
char name[40];
int age;
float marks;
};
int main()
{
    struct student s1,s2;


    printf("Please Enter info for student 1:\n");
    printf("Name:\n");
    scanf("%s",s1.name);
    printf("Age:\n");
    scanf("%d",&s1.age);
    printf("Marks:\n");
    scanf("%f",&s1.marks);

    printf("Display info for student 1:\n");
    printf("Name:%s\n",s1.name);
    printf("Age:%d\n",s1.age);
    printf("Marks:%f\n",s1.marks);

    printf("Please Enter info for student 2:\n");
    printf("Name:\n");
    scanf("%s",s2.name);
    printf("Age:\n");
    scanf("%d",&s2.age);
    printf("Marks:\n");
    scanf("%f",&s2.marks);
    printf("Display info for the student 2:\n");
    printf("Name:%s\n",s2.name);
    printf("Age:%d\n",s2.age);
    printf("Marks:%f\n",s2.marks);
    float avg;
    avg=(s1.marks+s2.marks)/2;
    printf("Average of total marks is %f\n",avg);
    return 0;
}






