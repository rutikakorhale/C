
#include<stdio.h>

int FristOccurance(char cValue,char *str)
{
    int iCnt = 1; 
    int iPos = 0;

    while(*str != '\0')
    {
        if(*str == cValue )
        {
            iPos = iCnt; 
            break;
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
    scanf("%[^'\n']s",Arr);// space accept karyna sathi special scanf

    printf("Enetr the Chracter\n");
    scanf(" %c",&ch);// buffer data flush hoto mahnu space_deli

    iRet = FristOccurance(ch,Arr);// Arr(*aslya mul address ) call by is call by address /ch(value jat ahe) ahe to call by value formate madhya jatoy

    printf("Frist Occuarnce of charatcter :%d\n",iRet);
    return 0;
}