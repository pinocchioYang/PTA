#include<stdio.h>
#include<math.h>


/*ERROR NOTE:      之前把题目理解错了，把10000作为最大素数范围，其实是10000个！！！！！！！    */
int main()
{
    int m,n;
    scanf("%d %d", &m, &n);
    int primeNum[n-m+1];
    int ArrayIndex=0,count = 0;
    int flagprint = 0, flagprime=0;
    int i=2,j;
    /*  打印素数表   */
    while(count<=10000)
     { 
        flagprime = 1;
        for(j=2;j<=sqrt(i);j++)
        {
            if((i % j )== 0)
            {
                flagprime = 0;
                break;
            }
        }
        if(flagprime == 1)  count++;
        if(count >= m && count <= n && flagprime == 1) primeNum[ArrayIndex++] = i;
        if(count >= n)   break;
        i++;
    }
    for(i=0;i<ArrayIndex;i++)
    {
        if(i % 10 ==0 && i !=0)     
        {
            printf("\n");
            flagprint=0;
        }
        if(flagprint == 1)   printf(" ");
        printf("%d", primeNum[i]);
        flagprint = 1;
    }

    return 0;
}