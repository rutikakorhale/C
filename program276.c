//STRING
#include<stdio.h>
int strlenI(char *str)
{
    int iCnt = 0;
    if(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;

}
int main()
{
    int iRet = 0;
    char Arr[20];

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenI(Arr);
    printf("Length Of String Is :%d\n",iRet);

    return 0;
}