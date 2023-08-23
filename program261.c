//input 4
//output * * * *
//RECURSION.....
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number of elements\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
