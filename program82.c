
// pratcie
#include<stdio.h>
#include<stdlib.h>
void Demo(int Arr[] , int ilength)
{
  
  // logic 
}
int main()
{
  int iSize = 0;
  int iCnt = 0;
  int*ptr = NULL;

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
  Demo(ptr,iSize);
  free(ptr);
  return 0;
}