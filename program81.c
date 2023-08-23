
#include<stdio.h>
#include<stdlib.h> //

float Average(int Arr[] , int ilength)
{
   int iCnt = 0;
   int iSum = 0;
   for(iCnt = 0; iCnt < ilength; iCnt++)
   {
     {
        iSum = iSum + Arr[iCnt];
     }
     return((float)iSum/(float)ilength);  
    
   }
}

int main() // entery point fun
{ 
    int iSize = 0;
    int *ptr = NULL; 
    float fRet= 0.0f;
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
    
    fRet = (ptr,iSize);
    printf("Average is :%f\n",fRet);

    
    free(ptr);

    return 0; 


}