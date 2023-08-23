
#include<stdio.h>
#include<stdlib.h> //

void EvenDisplay(int ilength, int Arr[]) 
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
      if((Arr[iCnt] % 2) == 0)
      {
         printf("%d\n",Arr[iCnt]);
      }
    }
}

int main() 
{ 
    int iSize = 0; 
    int*ptr = NULL;
    
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
    
    EvenDisplay(ptr,iSize);

    free(ptr);

    return 0; 


}