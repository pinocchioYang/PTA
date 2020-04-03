#include <stdio.h>
#include <math.h>

int main(void)
{
  char a[1024],b[1024];
  int Da,Db;
  int suma = 0,sumb = 0,sum  =0;
  int aa= 0,bb = 0;
  if(scanf("%s %d %s %d",a,&Da,b,&Db));
  int i  =0;
  for(i = 0;a[i];i++)
  {
    if(a[i]-'0'==Da)
    {
      suma+=Da*(pow(10,aa++));
    }
  }
  for(i = 0;b[i];i++)
  {
    if(b[i]-'0'==Db)
    {
      sumb+=Db*(pow(10,bb++));
    }
  }
  
  sum = suma+sumb;
  printf("%d\n",sum);
  
  return 0;
}
