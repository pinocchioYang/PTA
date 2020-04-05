#include<stdio.h>

int main()
{
    int num[10];
    int i,j,tmp;
    for(i=0;i<10;i++)   scanf("%d",&num[i]);
    /*find the first number which is not zero*/
    for(i=1;i<10;i++)
    {
        if(num[i] != 0)
        {
            printf("%d", i);
            num[i]--;
            break;
        }
    }
    /*print all numbers*/
    for(i=0;i<10;i++)
    {
        if(num[i] !=0)
        {
            for(j=0;j<num[i];j++)   printf("%d", i);
        }
    }
    return 0;
}