#include<stdio.h>

// int main()
// {
//     int N, M;
//     scanf("%d %d", &N, &M);
//     int i;
//     int  a[N];
//     for (i = 0; i < N; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int j,tmp;
//     int m = M % N;
//     for(j=0;j<m;j++)
//     {
//         tmp = a[0];
//         a[0] = a[N-1];
//         for ( i = N-2; i >0; i--)
//         {
//             a[i+1] = a[i];
//         }
//         a[1] = tmp;
//     }


//     for(i=0;i<N;i++)    
//     {
//         if(i == N-1)        printf("%d", a[i]);
//         else                    printf("%d ", a[i]);
//     }
//     return 0;
// }

/* 先逆序打印再顺序打印*/
int main()
{
        int N, M;
    scanf("%d %d", &N, &M);
    int i;
    int  a[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    int m = M % N;
    for(i = N-m;i<N;i++)  printf("%d ", a[i]);
    for(i =0;i<N-m;i++)
    {
        if(i == N-m-1)  printf("%d", a[i]);
        else                    printf("%d ", a[i]);
    }
}
