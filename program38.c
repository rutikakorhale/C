#include<stdio.h>
void DisplayB( int iNo)
{

    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--) 
    {
      printf("%d\t",iCnt);
    }
    



}
int main()
{ 
    int iValue = 0;
    printf("enter number");
    scanf("%d\n",&iValue);

    DisplayB(iValue);
    return 0;

}