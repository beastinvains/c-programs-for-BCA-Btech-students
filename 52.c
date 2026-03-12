#include <stdio.h>
struct student
{
    char name[50];
    int marks[5];
};

void main(){
   struct student s;
   int total=0,avg=0;
   scanf("%s",s.name);
    for (int i=0;i<5;i++){
        printf("subject %d:",i+1);
         scanf("%d",&s.marks[i]);
         total+=s.marks[i];
    }
    avg=total/5.0;
    printf("Name:%s\nTotal:%d\nAverage:%d",s.name,total,avg);
    for(int i=0;i<5;i++){
        printf("\n%d",s.marks[i]);
    }
    printf("%dtotal",total);
    printf("%davg",avg);

}