#include<stdio.h>
#define CLK_TCK 100

int main()
{
    int c1, c2,c,h,m,s;
    scanf("%d %d",&c1, &c2);
    c = c2 -c1;
    s = (c+50) / CLK_TCK;
    h = s /3600;
    s  -= h*3600;
    m = s / 60;
    s -= m*60;
    printf("%02d:%02d:%02d",h,m,s);

    return 0;
}