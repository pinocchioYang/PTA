#include<stdio.h>

int main()
{
    int coefficient;
    int exponent;
    int cin = 0;
    int flag = 0;
    while (cin  != '\n')
    {
        scanf("%d %d", &coefficient, &exponent);
        if(exponent != 0)   
        {
            if(flag == 1)   printf(" ");
            printf("%d %d", coefficient*exponent, exponent-1);
            flag = 1;
        }
        cin = getchar();
    }
    if(flag == 0)   printf("0 0");

    return 0;
    
}