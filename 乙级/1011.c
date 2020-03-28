#include<stdio.h>

int main()
{
    int n;
    double a =0.0,b=0.0,c=0.0;
    scanf("%d", &n);
    for(int i=1;i<n+1;i++)
    {
        scanf("%f %f %f", &a, &b, &c);
        printf("Case #%d: ", i);
        if((a+b) > c)   printf("true\n");
        else        printf("false\n");

    }
    return 0;
}