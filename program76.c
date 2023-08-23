
#include<stdio.h>
#include<stdlib.h> 

int Addtion(int Arr[] , int ilength)
{
   int iSum = 0;
   int iCnt = 0;
   for(iCnt = 0; iCnt < ilength; iCnt++)
   {
      iSum = iSum + Arr[iCnt];
   } 
   return iSum;
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
    printf("Addtion is :%d\n",iRet);


    free(ptr);

    return 0; 


}