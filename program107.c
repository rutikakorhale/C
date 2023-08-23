
// pattern printing
// input : 7
// output :1 2 3 4 5 6 7 7 6 5 4 3 2 1 // asa display karyna sathi 2 for loop lagtat
#include<stdio.h>

void Display(int ino)
{
    int iCnt = 0;


    for(iCnt = 1; iCnt <= ino; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    
    for(iCnt = ino-1; iCnt >= 1; iCnt--)
    {
       printf("%d\t",iCnt);
    }

    printf("\n");
}    
    
int main()
{
    int iFrequency = 0;

    printf("Enetr the Frequency of Symbol :\n");
    scanf("%d",&iFrequency);
    Display(iFrequency);
    return 0;
}