// factorial
#include<stdio.h>

void DisplayF(int iNo)  
{
     int iCnt = 0;
    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
       printf("%d\t",iCnt);
    }

}
int main()
{ 
    int iValue = 0;
    printf("enter number");
    scanf("%d",&iValue);

    DisplayF(iValue);

}

/// factorial
// input ino = 5;
// 5!
//factorial = 1*2*3*4*5 = 120
// factorial = 5*4*3*2*1 = 120