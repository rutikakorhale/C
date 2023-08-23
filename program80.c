
#include<stdio.h>
#include<stdlib.h> //

int OddCount(int Arr[] , int ilength)
{
   int iCnt = 0;
   int iCounter = 0;
   for(iCnt = 1; iCnt < ilength; iCnt++)
   {
      if((Arr[iCnt] % 2) != 0)
      {
        iCounter++;
      }
   }
}

int main()
{ 
    int iSize = 0;
    int*ptr = NULL; 
    int iRet= 0;
    int iCnt = 0; 

    printf("enter the number of elements\n");
    scanf("%d",&iSize);


    ptr = (int*)malloc(iSize * sizeof(int));

    
    printf("enter the elements\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("elements of array are\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
    iRet = (ptr,iSize); 
    printf("odd element are :%d\n",iRet);

    
    free(ptr);

    return 0; 


}