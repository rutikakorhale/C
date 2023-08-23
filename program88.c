
// accept n number from and as well as another number no s present or not
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Search(int Arr[] , int ilength , int iNo) // liner search line mdhya earch karta chala
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < ilength ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
        if(Arr[iCnt] == ilength)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
     
}
int main()
{
  int iSize = 0;
  int iCnt = 0;
  int*ptr = NULL;
  bool bRet = false;
  int iValue = 0;

  printf("Enter the number of Element\n");
  scanf("%d",&iSize);

  ptr = (int*)malloc(iSize*sizeof(int));


  printf("Enetr the Elements :\n");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }

  printf("Enetr the Element that you want ti search :\n",iValue);
  scanf("%d",&iValue);

  printf("Element of Array is :\n");
  for(iCnt = 0; iCnt <iSize; iCnt++)
  {
    printf("%d\n",ptr[iCnt]);
  }
  bRet = Search(ptr,iSize,iValue);
  if(bRet == true)
  {
    printf("Element is present Array : \n",iValue);
  }
  else
  {
    printf("Element is not present in Array :\n",iValue);
  }
  free(ptr);
  return 0;
}