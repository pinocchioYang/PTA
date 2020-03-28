#include<stdio.h>
#include<math.h>

int main()
{
    int sushu[10001] = {NULL};
    int n=0;
    int index=0;
    int flag = 1;
    scanf("%d", &n);

    /*  打印素数表   */
    for(int i=2;i<=n;i++)
    {
        flag = 1;

        for(int j=2;j<=sqrt(i);j++)
        {
            if((i % j )== 0)
            {
                flag = 0;
                break;
            }
            
        }

         if (flag == 1)     sushu[index++] = i;
    }
    /* 统计 */
    int count=0, i=1;
    while (sushu[i ] != NULL)
    {
        if(sushu[i] == sushu[i-1] + 2)     
        {   
            count++;
            i++;    
        }
        else        i++;
        
    }
    printf("%d", count);
}