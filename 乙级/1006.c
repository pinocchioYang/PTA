#include<stdio.h>

int main()
{
    int n;
    int b,s,g;
    int i;
    char r[30]={NULL};
    scanf("%d", &n);
    b = n/100;
    s = (n/10)%10;
    g = n%10;

    char *p;
    p=r;
    for(i=0;i<b;i++)
    {
        *p = 'B';
          p = p+1;
    }
    for(i=0;i<s;i++)
    {
        *p = 'S';
          p = p+1;
    }
    for(i=0;i<g;i++)
    {
        *p = '1'+i;
          p = p+1;
    }
    printf("%s", r);




    return 0;
}