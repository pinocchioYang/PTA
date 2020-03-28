#include <stdio.h>
int main()
{
    int k,n,m,a[101]={0},i,temp,j,flag=1;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k-1;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        if(a[i]!=0)
        {
            m=a[i];
            while(m!=1)
            {
                if(m%2!=0)
                {
                    m=(m*3+1)/2;
                }else
                {
                    m=m/2;
                }
                for(j=0;j<k;j++)
                {
                    if(a[j]==m)
                    {
                        a[j]=0;
                        break;
                    }
                }
            }
        }
    }
    for(i=0;i<k;i++)
    {
        if(a[i]!=0&&flag!=0)
        {
            printf("%d",a[i]);
            flag=0;
        }else if(a[i]!=0&&flag==0)
        {
            printf(" %d",a[i]);
        }
    }
    return 0;
}
