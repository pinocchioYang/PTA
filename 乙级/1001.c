#include<stdio.h>

int countSteps(int steps, int n)
{
    if(n == 1)
    {
        printf("1");
        return steps;
    }
    else
    {
        if((n % 2) == 0)
        {
            printf("%d ", n);
            return countSteps(++steps, n/2);
        }
        else 
        {
            printf("%d ", n);
            return countSteps(++steps, (3*n + 1)/2);
        }
    }

}
int main()
{
    int n;
    scanf("%d", &n);
    int step=0;
    step = countSteps(step, n);
    printf("\n%d", step);
    return 0;
}