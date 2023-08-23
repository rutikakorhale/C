

#include<stdio.h>
#include<stdlib.h>
int MaxMinNumber(int Arr[] , int ilength)
           
{
    int iCnt = 0;
    int iMax = Arr [0];
    int iMin = Arr [0];

    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        if(Arr[iCnt] < iMin) 
        {
            iMin = Arr[iCnt];
        }
    }    
    printf("Smallest Number is :%d\n",iMin);
    printf("Largest Number is :%d\n",iMax);
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

  MaxMinNumber(ptr,iSize);
  free(ptr);
  return 0;
}