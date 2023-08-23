
#include<stdio.h>
#include<stdbool.h>

bool Cheakprime(int iNo)
{
    int iCnt =0;
    
    
    for(iCnt = 2; iCnt <=(iNo/2); iCnt++)
    {
        if((iNo % iCnt ) == 0) 
        {                        
            break;
        }

    }
    if(iCnt == (iNo/2)+1)  
    {      
        return true;
    } 
    else
    {
        return false;
    }
    

}
int main()
{
    int iValue =0;
    bool bRet = false; 

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = Cheakprime(iValue);

    if(bRet == true )
    {
        printf("%d is prime number\n",iValue);
    }
    else
    {
        printf("%d is not primre number\n",iValue);
    }

    return 0;
}    