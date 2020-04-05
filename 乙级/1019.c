#include<stdio.h>
#include<math.h>

int  Compute(int num)
{
    int sortedNum[4];
    sortedNum[0] = num/1000;
    sortedNum[1] = num/100%10;
    sortedNum[2] = num%100/10;
    sortedNum[3] = num%10;
    /*排序*/
    int i,j,tmp;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(sortedNum[i] < sortedNum[j]) 
            {
               tmp = sortedNum[i];
               sortedNum[i] = sortedNum[j];
               sortedNum[j] = tmp; 
            }
        }
    }
    /*作差*/
    int a=0,b=0,result=0;
    for(i=0;i<4;i++)
    {
        b += pow(10,3-i)*sortedNum[i];
        a += pow(10,i)*sortedNum[i];
    }
    result = b - a;
    printf("%04d - %04d = %04d\n",b,a,result);
    /*递归结束条件，差结果为0或等于6174，输入为6174*/
    if(result == 0 ||  (num == 6174) || result == 6174) 
    {
        return 1;
    }
    else    Compute(result);
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    Compute(n);
    return 0;
}