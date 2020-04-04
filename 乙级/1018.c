/*C:锤子，J：剪刀，B：布*/
#include<stdio.h>


struct Player{
    int countC;
    int countJ;
    int countB;
    int countWin;
    int countLose;
    int countDraw;
};
int main()
{
    /*Initialize*/
    struct Player A;
    A.countB=0;A.countC=0;A.countJ=0;A.countWin=0;A.countLose=0;A.countDraw=0;
     struct Player B;
    B.countB=0;B.countC=0;B.countJ=0;B.countWin=0;B.countLose=0;B.countDraw=0;
    
    int i,N;
    char statusA,statusB,other;
    
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%c %c %c",&other,&statusA,&statusB);
        if(statusB == statusA)
        {
            A.countDraw++;
            B.countDraw++;
        }
        else
        {
            switch (statusA)
            {
                case 'C':
                    if(statusB == 'B')
                    {
                        A.countLose++;
                        B.countWin++;B.countB++;
                    }
                    if(statusB == 'J')
                    {
                        B.countLose++;
                        A.countWin++;A.countC++;
                    }
                    break;
                case 'B':
                    if(statusB == 'J')
                    {
                        A.countLose++;
                        B.countWin++;B.countJ++;
                    }
                    if(statusB == 'C')
                    {
                        B.countLose++;
                        A.countWin++;A.countB++;
                    }
                    break;
                case 'J':
                    if(statusB == 'C')
                    {
                        A.countLose++;
                        B.countWin++;B.countC++;
                    }
                    if(statusB == 'B')
                    {
                        B.countLose++;
                        A.countWin++;A.countJ++;
                    }
                    break;
                default:
                    break;
            }
        }
    }
    /*print result of the game*/
    printf("%d %d %d\n",A.countWin,A.countDraw,A.countLose);
    printf("%d %d %d\n",B.countWin,B.countDraw,B.countLose);
    if(A.countB>=A.countJ && A.countB>=A.countC)  printf("B ");
    else if(A.countC>A.countB && A.countC>=A.countJ)  printf("C ");
    else if(A.countJ>A.countC && A.countJ>A.countB)  printf("J ");
    if(B.countB>=B.countJ && B.countB>=B.countC)  printf("B");
    else if(B.countC>B.countB && B.countC>=B.countJ)  printf("C");
    else if(B.countJ>B.countC && B.countJ>B.countB)  printf("J");
    return 0;
}