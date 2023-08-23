
#include<stdio.h>
void DisplayFactores(int ino)
{
    int iCnt = 0;
        
    for(iCnt = 1; iCnt <= ino; iCnt++)
    {
        printf("%d\n",iCnt);
    }

}
int main()
{
    int iValue = 0;
    printf("enter number\n");
    scanf("%d",&iValue);
    DisplayFactores(iValue);

    return 0;
}