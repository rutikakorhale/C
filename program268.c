//input 5678
//output 5 6 7 8
//DIGIT PROBLEMS
#include<stdio.h>

void DisplayI(int iNo)
{    
    while(iNo != 0)
    {
        printf("%d\t",iNo%10);
        iNo = iNo/10;
    
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