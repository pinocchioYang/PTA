#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,N,SumWeight=0,Sum=0;
    int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char M[11] = {'1', '0', 'X', '9', '8' ,'7','6','5','4','3','2' };
    char Id[19];
    int flag =0;
    scanf("%d", &N);
    for(i=0;i<N;i++)
    {
        Sum = 0;
        scanf("%s", &Id);
        for(j=0;j<17;j++)
        {
            Sum += (Id[j]-'0')*weight[j];
        }
        if(M[(Sum)%11] != Id[17])
        {
            printf("%s\n", Id);
            flag = 1;
        }
    }
    if(flag == 0)   printf("All passed");
    return 0;
}
