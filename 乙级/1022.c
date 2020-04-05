#include<stdio.h>
#include<math.h>

int main()
{
    int A,B,D,sum;
    int r[31];
    int index=0;
    scanf("%d %d %d",&A, &B, &D);
    sum = A + B;
    int i;
    for(i=0;i<31;i++)
    {
        if(sum>0)   
        {
            r[i] = sum % D;
            sum = sum / D;
            index++;
        }
        else    break;
    }
    if(index == 0)  printf("0");
    else    for(i=index-1;i>=0;i--) printf("%d", r[i]);
    return 0;
}