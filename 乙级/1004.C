#include<stdio.h>
#include<malloc.h>






int main()
{
    
    int n;
    scanf("%d", &n);

    struct Student
    {
        char name[10];
        char SID[10];
        int grade;
    }Student[n];

    int MaxIndex=0, MinIndex=0;

    for(int i=0;i<n;i++)
    {
        scanf("%s %s %d", &Student[i].name,&Student[i].SID, &Student[i].grade);
        if(Student[MaxIndex].grade < Student[i].grade)
        {
            MaxIndex = i;
        }
        if(Student[MinIndex].grade > Student[i].grade)
        {
            MinIndex = i;
        }
    }

    printf("%s %s\n", Student[MaxIndex].name, Student[MaxIndex].SID);
    printf("%s %s", Student[MinIndex].name, Student[MinIndex].SID);




    return 0;
}



