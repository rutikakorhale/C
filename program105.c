
// pattern printing
// input : 7
// output :a1b2c3d4e5f6g
#include<stdio.h>

void Display(int ino)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'A'; iCnt <= ino; iCnt++, ch++)
    {
        printf("%c\t%d\t",ch,iCnt);
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