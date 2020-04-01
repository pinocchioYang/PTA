#include<stdio.h>
#include<stdlib.h>

typedef struct Student* PtrS;
  struct Student
    {
        int Id;
        int De;
        int Cai;
        int sum;
        int type;
    };

/*比较大小，如果S1 <S2, 则返回 1*/
int cmp(const void* a, const void* b)
{
    if((*(PtrS)a).type != (*(PtrS)b).type)  return (*(PtrS)b).type - (*(PtrS)a).type;
    if((*(PtrS)a).sum != (*(PtrS)b).sum)    return (*(PtrS)b).sum - (*(PtrS)a).sum;
    if((*(PtrS)a).De != (*(PtrS)b).De)  return (*(PtrS)b).De - (*(PtrS)a).De;
    if((*(PtrS)a).Id != (*(PtrS)b).Id)  return (*(PtrS)a).Id - (*(PtrS)b).Id;
    return 0;
}


int main()
{
    int N, LowLimit, HighLimit;
    scanf("%d %d %d", &N, &LowLimit, &HighLimit);

    struct Student S[N+1];

    /*分类学生*/
    int i,j;
    int  count=0;
    for(i=0;i<N;i++)
    {
        scanf("%d %d %d", &S[count].Id, &S[count].De, &S[count].Cai);
        S[count].sum = S[count].De+S[count].Cai;
        if(S[count].De >= HighLimit && S[count].Cai>=HighLimit){
            S[count].type = 4;count++;
        }
        else if(S[count].De >= HighLimit && S[count].Cai >= LowLimit) {
            S[count].type = 3;count++;
        }
        else if(S[count].De >= S[count].Cai && S[count].De>=LowLimit && S[count].Cai>=LowLimit) {
            S[count].type = 2;count++;
        }
        else if(S[count].De >= LowLimit && S[count].Cai >= LowLimit)    {
            S[count].type = 1;count++;
        }
        else   continue;

    }
    /*录取人数*/
    printf("%d\n", count);
    qsort(S,count,sizeof(*S),cmp);
    for(i=0;i<count;i++)
    {
        printf("%d %d %d\n", S[i].Id,S[i].De, S[i].Cai);
    }
    
    
}
