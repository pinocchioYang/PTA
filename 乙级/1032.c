#include<stdio.h>
#include<malloc.h>

int main()
{
    int N,i,num,grade;
    int maxgrade = 0,maxnum;
    char otr;
    int p[100]={0};
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d %d",&num,&grade);
        p[num] += grade;
        if(p[num] > maxgrade)   
        {
            maxnum = num;
            maxgrade = p[num];
        }
    }
    printf("%d %d",maxnum,maxgrade);
}