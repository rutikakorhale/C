

#include<stdio.h>
#include<stdlib.h>
#define ERR_NOTFOUND -1
int SearchLastOcuurance(int Arr[] , int ilength, int iNo)
{
    int iCnt = 0;
    int iPos = ERR_NOTFOUND;
    for(iCnt = ilength; iCnt >= 0; iCnt--) 
    {
        if(Arr[iCnt] == iNo)
        {
            iPos =iCnt; 
        }
    }
    return iPos;
  

}
int main()
{
  int iSize = 0;
  int iCnt = 0;
  int*ptr = NULL;
  int iValue = 0;
  int iRet = 0;


  printf("Enter the number of Element\n");
  scanf("%d",&iSize);

  ptr = (int*)malloc(iSize*sizeof(int));

  printf("Enetr the Elements :\n");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  printf("enter the Element that you want to search :\n");
  scanf("%d",&iValue);

  printf("Element of Array is :\n");
  for(iCnt = 0; iCnt <iSize; iCnt++)
  {
    printf("%d\n",ptr[iCnt]);
  }
  iRet = SearchLastOcuurance(ptr,iSize,iValue);
  if(iRet == ERR_NOTFOUND)
  {
    printf("there is no such element :\n ");
  }
  else
  {
    printf("%d occured at index %d\n",iValue,iRet);
  }
  free(ptr);
  return 0;
}