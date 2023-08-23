
#include<stdio.h>
#include<stdlib.h>
int MinNumber(int Arr[] , int ilength)
{
    int iCnt = 0;
    int iMin = Arr[0];
    
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}
int MaxNumber(int Arr[], int ilength)
{    
    int iCnt = 0;
    int iMax = Arr[0];

    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        if(Arr[iCnt] > iMax )
        {
            iMax= Arr[iCnt];
        }

    }
    return iMax;
}
int main()
{
  int iSize = 0;
  int iCnt = 0;
  int*ptr = NULL;
  int iRet = 0;

  printf("Enter the number of Element\n");
  scanf("%d",&iSize);

  ptr = (int*)malloc(iSize*sizeof(int));

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
  iRet = MaxNumber(ptr,iSize);
  printf("Largest Element is :%d\n",iRet);

  iRet = MinNumber(ptr,iSize);
  printf("Smallest Element is :%d\n",iRet);
  free(ptr);
  return 0;
}