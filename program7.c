/// write the program which cheak wheather number is divisible by 3 and 5.


#include<stdio.h>  /// for scanf and printf
#include<stdbool.h> /// for boolen data type 

////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
// function name : CheakDivisible
// input : integer
// outut : Boolen
// Describtion : cheaks wheather input is divisible by 3 and 5.
// Autheor : Korhale  Rutika Rahul.
// date : 25/4/2023 
// update date : 26/4/2023
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

bool CheakDivisible(int iNo)
{

   if (((iNo % 3) == 0) && ((iNo % 5) == 0))   //logic for code.
   {
      return  true;                 
      
      
   }
   else
   {
      return  false;
   }
}
   
/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
///////// entry point function
/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

int main()
{

      int iValue = 0; //// variable to accept input
      bool bRet = false; /// variable to accept return value

      printf("please enter to cheak Wheater it is divisible by 3 and 5 :\n");
    
      scanf("%d",&iValue);
      bRet = CheakDivisible(iValue); // functon call

      if(bRet == true)
      {
        printf("%d is completly divisible by 3 and 5\n",iValue);
      }
      else
     {
        printf("%d is not completely divisible by 3 and 5\n",iValue);

      }
      return 0;
}




