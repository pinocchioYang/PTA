#include<stdio.h>
/*
A1​  = 能被 5 整除的数字中所有偶数的和；
A2= 将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算 n1−n2 +n3−n4​​ ⋯；
A3  = 被 5 除后余 2 的数字的个数；
A4​  = 被 5 除后余 3 的数字的平均数，精确到小数点后 1 位；
A​5= 被 5 除后余 4 的数字中最大数字。
*/
int main()
{
    int A1 = 0, A2=0,A3=0,A5=0;
    float A4 = 0;
    int n,i, num;
    int flag = 0; //用于交错求和,0加，1减
    int countA4=0;
    scanf("%d", &n);
    
    for(i=0;i<n;i++)     
    {
        scanf("%d", &num);
        /*偶数 且 能被5整除*/
        if((num % 2) == 0 && (num %5) == 0)
        {
            A1 += num;
        }     
        /*能被5除后余1*/
        if(num % 5 == 1)
        {
            if(flag == 0)
            {
                A2 += num;
                flag =1;
            }
            else
            {
                A2 -= num;
                flag = 0;
            }
        }
        /*能被5除后余2*/
        if(num % 5 == 2)    A3++;
        /*余3*/
        if(num % 5 == 3)
        {
            A4 += num;
            countA4++;
        }
        /*余4*/
        if(num % 5 == 4)
        {
            if(num > A5)    A5 = num;
        }
    }
    if(A1 == 0)     printf("N ");
    else                 printf("%d ", A1);
    if(A2 == 0)     printf("N ");
    else                 printf("%d ", A2);
    if(A3 == 0)     printf("N ");
    else                 printf("%d ", A3);
    if(A4 == 0)     printf("N ");
    else                 printf("%.1f ", A4/countA4);
    if(A5 == 0)     printf("N");
    else                 printf("%d", A5);
    
    return 0;
}