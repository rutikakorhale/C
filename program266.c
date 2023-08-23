
#include<stdio.h>

void DisplayI(int iNo)
{
    static int iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;    
    }    
}
int main()
{
    int iValue = 0;

    printf("Enter the Number of elements\n");
    scanf("%d",&iValue);

    DisplayI(iValue);

    return 0;
}