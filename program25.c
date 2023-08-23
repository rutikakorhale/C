
#include<stdio.h>

int Sumfactors(int iNo)    
{                     
    int iCnt = 0; 
    int iSum = 0;

    for(iCnt =1; iCnt <= (iNo/2); iCnt++)
    
        if((iNo % iCnt) == 0)  
        {
            iSum = iSum + iCnt;
        }
    

     return iSum;

}


int main()
{
    int iValue = 0;

    int iRet = 0; 
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    

    iRet = Sumfactors(iValue);

    printf("Sumnation of factor is : %d\n",iRet);
} 
/*
#include<stdio.h>
int sumaddtion(int iNo)
{ int iCnt = 0;
  int iSum = 0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  FOR(iCnt = 1; iCnt <= (iNo/2); Icnt++)
  if((iNo % ICnt) == 0)
  {
    isum = isum + icnt
  }
  return iSum


}
int main()
{ int iValue =0;
  
  int iRet = 0;
  printf("enter nymber\n");
  scanf("%d\n",&iValue)
  iRet = sumaddtion("%d",&Value:%d\n,iRet);
    return 0;
}


*/   