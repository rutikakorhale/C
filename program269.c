//input 4
//output * * * *
#include<stdio.h>

void DisplayR(int iNo)
{    
    if(iNo != 0)
    {
        printf("%d\t",iNo%10);
        iNo = iNo/10;
        DisplayR(iNo);    
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number of elements\n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    return 0;
}