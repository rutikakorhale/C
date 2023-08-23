

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Search(int Arr[] , int ilength, int iNo)
{
  int iCnt = 0;

  for(iCnt = 0; iCnt < ilength; iCnt++)
  {
    if(Arr[iCnt] == iNo)
    {
      break;
    }
  }
  if(Arr[iCnt] == iNo)
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
  int iSize = 0;
  int iCnt = 0;
  int*ptr = NULL;
  bool bRet = 0;
  int iValue = 0;

  printf("Enter the number of Element\n");
  scanf("%d",&iSize);

  ptr = (int*)malloc(iSize*sizeof(int));

  printf("Enetr the Elements :\n");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }

  printf("Enetr the Element that you want ta search :\n",iValue);
  scanf("%d",&iValue);

  printf("Element of Array is :\n");
  for(iCnt = 0; iCnt <iSize; iCnt++)
  {
    printf("%d\n",ptr[iCnt]);
  }
  bRet = Search(ptr,iSize,iValue);
  if(bRet  == true)
  {
    printf("%d is present in the arry\n",iValue);
  }
  else
  {
    printf("%d is not present in the array\n",iValue);
  }
  free(ptr);
  return 0;
}