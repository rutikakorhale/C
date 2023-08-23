
#include<stdio.h>
#include<stdbool.h> 

bool Cheakprime(int iNo)
{
    int iCnt = 0 ;
                     
    bool bFlage = true; 
                
    for(iCnt = 2 ; iCnt <= (iNo/2); iCnt++) 
    {
        if((iNo % iCnt ) == 0) 
        {
            bFlage = false; 
            break; 
        }      
    } 
    return bFlage;

}
int main()
{
    int iValue =0;  
    bool bRet = false; 

    printf("Enter number :\n");
    scanf("%d",&iValue); 
    Cheakprime(iValue); 
    
    bRet = Cheakprime(iValue); 

    if(bRet == true)
    {
        printf("%d is a prime number\n",iValue);
    }
    else
    {
        printf("%d is not a prime number\n",iValue);
 
    }
    return 0;

}

    
    
    
