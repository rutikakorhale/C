
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchFristOcuurance(int Arr[] , int ilength, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == ilength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
  

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
  iRet = SearchFristOcuurance(ptr,iSize,iValue);
  if(iRet == true)
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