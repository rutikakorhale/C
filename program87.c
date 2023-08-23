
// pratcie
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Search(int Arr[] , int ilength, int iNo)
{
  int iCnt = 0;
  bool bflage = false;
  for(iCnt = 0; iCnt < ilength; iCnt++)
  {
    if(Arr[iCnt] == iNo)
    {
       
       bflage = true;
       break;
      
    }
  }
  return bflage; 
  
  
}
int main()
{
  int iSize = 0;
  int iCnt = 0;
  int*ptr = NULL;
  bool bRet = false;
  int iVaule = 0;

  printf("Enter the number of Element\n");
  scanf("%d",&iSize);

  ptr = (int*)malloc(iSize*sizeof(int));

  printf("Enter Element that you want to search :%d\n",iVaule);
  scanf("%d",&iVaule);

  printf("Enetr the Elements :\n");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }

  printf("Element of Array is :\n");
  for(iCnt = 0; iCnt <iSize; iCnt++)
  {
    printf("%d\n",ptr[iCnt]);
  }
  bRet = Search(ptr,iSize,iVaule);
  if(bRet == true)
  {
    printf("Element is present : \n",iVaule);
  }
  else
  {
    printf("Element is not present \n",iVaule);
  }
  free(ptr);
  return 0;
}