
#include<stdio.h>

int cheakaverage(int ino)
{ 
    int iDigit = 0; 
    int isum =0;
    int iCount = 0;
    if(ino < 0) 
    {
        ino = -ino;
    }

    while(ino != 0)
    {
        iDigit = ino % 10;
        isum = isum + iDigit;
         iCount++;
        ino = ino / 10;
    }
    return ((float)isum / (float)iCount);
                        


    
}
int main()
{
    int iValue = 0; float fRet = 0.0f;

    printf("enter number\n");
    scanf("%d",&iValue);

    fRet = cheakaverage(iValue);
    printf("Average of Digits is :%f\n",fRet);

    return 0;
}    