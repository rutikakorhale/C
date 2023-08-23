#include<stdio.h>
    void Display(int iNo)
{
        int iCnt = 0;
        if(iNo < 0)  
    {
        printf("Error : Invalid Input.\n");
        printf("Note : please enter positive number\n");
        
    }
        
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d",iCnt);
    }
    
}

int main()
{
     int iValue = 0;
     printf("display data frequency \n");
     scanf("%d",&iValue);

     
 Display(iValue);
 return 0;
}