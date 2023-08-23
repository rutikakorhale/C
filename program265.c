//input 4
//output * * * *
#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number of elements\n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    printf("End Of main\n");

    return 0;
}