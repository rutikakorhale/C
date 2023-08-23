
#include<stdio.h>
#include<stdlib.h> //

int EvenCount(int Arr[] , int ilength)
{
   int iCnt = 0;
   int iCounter = 0;
   for(iCnt = 1; iCnt < ilength; iCnt++)
   {
      if((Arr[iCnt] % 2) == 0)
      {
        iCounter++;
      }
   }
   return iCounter;
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
    // step 5pass they array to the function.
    iRet = (ptr,iSize); // Demo(400,4)
    printf("Even element is:%d\n",iRet);

    // steep 6 deallocate the memory
    free(ptr);

    return 0; 


}