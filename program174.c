
#include<stdio.h>
#define ERR_NOTFOUND -1  
int LastOccurance(char cValue,char *str)
{
    int iCnt = 1;
    int iPos = ERR_NOTFOUND;

    while(*str != '\0')
    {
        if(*str == cValue )
        {
            iPos = iCnt;
        }
        str++;
        iCnt++;
    }
    return iPos;

}
int main()
{
    int iRet = 0;
    char Arr[20];
    char ch = '\0';

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enetr the Chracter\n");
    scanf(" %c",&ch);

    iRet = LastOccurance(ch,Arr);// Arr call by 
    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such Chracter\n");
    }
    else
    {
        printf("Last Occurance of that Character is :%d\n",iRet);
    }

    return 0;
}