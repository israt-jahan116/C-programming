
//Write a c programe using structure to store name,id,and marks of three subjects for two students, calculate the total average marks of each student
//Find the student has the higher average.


#include<stdio.h>
struct student{
char name[40];
int id;
int marks1;
int marks2;
int marks3;

};
int main(){
struct student s1,s2;
int total1,total2;
float average1,average2;
printf("Enter the student 1 information:\n");
printf("Name:");
scanf("%s",s1.name);
printf("ID:");
scanf("%d",&s1.id);
printf("Marks1:");
scanf("%d",&s1.marks1);
printf("Marks2:");
scanf("%d",&s1.marks2);
printf("Marks3:");
scanf("%d",&s1.marks3);

printf("Enter the student 2 information:\n");
printf("Name:");
scanf("%s",s2.name);
printf("ID:");
scanf("%d",&s2.id);
printf("Marks1:");
scanf("%d",&s2.marks1);
printf("Marks2:");
scanf("%d",&s2.marks2);
printf("Marks3:");
scanf("%d",&s2.marks3);
total1=s1.marks1+s1.marks2+s1.marks3;
total2=s2.marks1+s2.marks2+s2.marks3;
average1=total1/3.0;
average2=total2/3.0;
printf("Student 1:\n");
printf("Name:%s\n",s1.name);
printf("ID:%d\n",s1.id);
printf("Total:%d\n",total1);
printf("Average:%f\n",average1);


printf("Student 2:\n");
printf("Name:%s\n",s2.name);
printf("ID:%d\n",s2.id);
printf("Total:%d\n",total2);
printf("Average:%f\n",average2);
if(average1>average2)
    printf("Higher average:%s\n",s1.name);
else
    printf("Higher average:%s\n",s2.name);
return 0;
}







