#include<stdio.h>
#include<string.h>

int main()
{
    char A[1002];
    int B;
    scanf("%s %d", &A, &B);
    /*求商*/
    int i;
    int merchant=0,remainder=0,divisor,flag = 0;
    for(i=0;i<strlen(A);i++)
    {
        divisor = (A[i]-'0') + remainder*10;
        merchant = divisor / B;
        remainder = divisor % B;
        /*保证商第一位数不是0*/
        if(merchant !=0 || i !=0)   
        {
            printf("%d", merchant);
            flag = 1;
        }
    }
    
    if(flag == 0)   printf("0");//如果商是0，则输出0，应为之前计算时如果第一位是0不会输出
    printf(" %d",remainder);
    return 0;
}