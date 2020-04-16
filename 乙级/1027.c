#include<stdio.h>

int main()
{
    int N,i,j,n,sum,remain;
    char c;
    scanf("%d %c",&N, &c);
    /*计算层数n*/
    sum = 1;n=0;remain = N;
    for(i=1;i<=N;i++)
    {
        sum  += 2*(2*i+1);
        if(sum >= N) 
        {
            n = i;
            break;
        }
    }
    /*输出 */
    for(i=n;i>0;i--)
    {
        /*补全空格*/
        for(j=0;j<n-i;j++)  printf(" ");
        /*打*号*/
        for(j=0;j<(i-1)*2+1;j++)    
        {
            remain--;
            printf("%c", c);
        }
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        /*补全空格*/
        for(j=0;j<n-i;j++)  printf(" ");
        /*打*号*/
        for(j=0;j<(i-1)*2+1;j++)    
        {
            remain--;
            printf("%c", c);
        }
        printf("\n");
    }
    printf("%d", remain);
    return 0;
}