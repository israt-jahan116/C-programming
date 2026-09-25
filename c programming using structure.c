//write c programming using structure to store and display the details(roll,name,marks) of the student.
#include<stdio.h>
#include<string.h>
struct student{
int roll;
char name[50];
float marks;
};
int main(void){
struct student s1;
s1.roll=101;
strcpy(s1.name,"Ayesha");
s1.marks=87.5f;
printf("Roll:%d\n",s1.roll);
printf("Name:%s\n",s1.name);
printf("Marks:%.2f\n",s1.marks);
return 0;

}





